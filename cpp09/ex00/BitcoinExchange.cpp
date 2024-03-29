#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange (){}

BitcoinExchange::BitcoinExchange (const BitcoinExchange &a)
{
	this->operator=(a);
}
BitcoinExchange::~BitcoinExchange (){}

BitcoinExchange & BitcoinExchange::operator = (const BitcoinExchange &a)
{
	(void)a;
	return (*this);
}

void    BitcoinExchange::ReadBase()
{
    std::ifstream   input;
    std::string     database;

    input.open("./data.csv");
    if (input.fail())
    {
        std::cerr << REDCOLOR << "Error: data.csv not found." << ENDCOLOR << std::endl;
        exit(0);
    }
    while (!input.eof())
    {
        input >> database;
        std::string fulldate = database.substr(0,10).erase(4,1).erase(6,1);
        float      rate = 0.0;
        std::stringstream convert;
        convert << database.substr(11);
        convert >> rate;
        _database.insert(std::make_pair(fulldate,rate));
    }
    input.close();    
}

int BitcoinExchange::Parsing(int year, int month, int day, std::string raate ,float rate, std::string line)
{
    size_t idx = line.find("|");
    if (line[idx + 1] != ' ' || line[idx - 1] != ' ')
    {
        std::cerr << REDCOLOR << "Invalid Pipe" << ENDCOLOR << std::endl;
        return (-1);
    }

    if (line.substr(4,1) != "-" && line.substr(7,1) != "-")
    {
        std::cerr << REDCOLOR << "Invalid Date Format" << ENDCOLOR << std::endl;
        return (-1);
    }

    int count = 0;
    for (size_t i = 0; i < raate.length(); i++)
    {
        if (raate[0] == '.')
        {
            std::cerr << REDCOLOR << "Invalid Rate Format" << ENDCOLOR << std::endl;
            return (-1);
        }
        if (raate[i] == '.')
            count++;
        if (!(isdigit(raate[i])) && raate[i] != '.' && (count == 1 || count == 0))
        {
            std::cerr << REDCOLOR << "Error: not a positive number." << ENDCOLOR << std::endl;
            return (-1);
        }
    }

    int month_limits[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year < 2009 || month < 1 || month > 12)
    {
        std::cerr << REDCOLOR << "Invalid Date Format" << ENDCOLOR << std::endl;
        return (-1);
    }
    if (day > month_limits[month - 1] || day < 1)
    {
        std::cerr << REDCOLOR << "Out of month range" << ENDCOLOR << std::endl;
        return (-1);
    }
    if (rate < 0.00 || rate > 1000.00 )
    {
        std::cerr << REDCOLOR << "Error: too large a number." << ENDCOLOR << std::endl;
        return (-1);
    }
    return (0);
}

void    BitcoinExchange::PrintOuput(std::string inputdate, float bitcoins)
{
    std::map<std::string, float>::iterator itb = this->_database.begin();
    std::map<std::string, float>::iterator ite = this->_database.end();
    bool    flag = false;

    for (; itb != ite; itb++)
    {
        if (itb->first == inputdate)
        {
            flag = true;
            break;
        }
    }
   
    
    if (flag == true)
    {
        std::cout << inputdate.insert(4,"-").insert(7,"-") << " => " << bitcoins << " = " <<  std::fixed << std::setprecision(2) << bitcoins * itb->second << "\n";
        flag = false;
    }
    else
    {
        ite = this->_database.lower_bound(inputdate);
        std::cout << inputdate.insert(4,"-").insert(7,"-") << " => " << bitcoins << " = " << std::fixed << std::setprecision(2) << bitcoins * ite->second << "\n";
    }
}

void    BitcoinExchange::ReadInput(std::string file)
{
    std::ifstream   input;
    std::string     line;

    input.open(file);

    if (input.fail())
    {
        std::cerr << REDCOLOR << "Error: cannot open file named <" << file << ">" << ENDCOLOR << std::endl;
        input.close();    
        exit(0);
    }

    while (!input.eof())
    {
        std::string fulldate;
        std::getline(input, line);

        if(line == "")
            continue ;
        int year, month, day = 0;
        std::stringstream y, m, d;
        y << line.substr(0,4);
        m << line.substr(5,2);
        d << line.substr(8,2);
        y >> year;
        m >> month;
        d >> day;

        if (line.length() < 14)
        {
            std::cerr << REDCOLOR << "Error: bad input => " << line << ENDCOLOR << std::endl;
            continue ;
        }
        
        std::string raate = line.substr(13, line.find('\0'));

        float   bitcoins = 0.00;
        std::stringstream bit;
        bit << raate;
        bit >> bitcoins;

        if (month < 10 && day < 10)
            fulldate = std::to_string(year * 10) + std::to_string(month * 10) + std::to_string(day);
        else if (day < 10)
            fulldate = std::to_string(year) + std::to_string(month * 10) + std::to_string(day);
        else if (month < 10)
            fulldate = std::to_string(year * 10) + std::to_string(month) + std::to_string(day);
        else
            fulldate = std::to_string(year) + std::to_string(month) + std::to_string(day);

        if (Parsing(year, month, day, raate, bitcoins, line) == 0)
            PrintOuput(fulldate, bitcoins);
    }
    input.close(); 
    exit(0);
}

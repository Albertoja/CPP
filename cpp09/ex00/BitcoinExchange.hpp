#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"

class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &a);
        ~BitcoinExchange();
        BitcoinExchange &operator = (const BitcoinExchange &a);
        void ReadBase(void);
        void PrintMap(std::map<std::string, float> map);
        void ReadInput(std::string file);
        int  Parsing(int year, int month, int day, std::string raate, float rate, std::string line);
        void PrintOuput(std::string inputdate, float bitcoins);
        class BadException: public std::exception
		{
			public:
				const char* what(void) const throw();
		};

    private:
        std::map<std::string , float> _database;
};
#endif

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &a)
{
    this->operator=(a);
}

RPN::~RPN(){}

RPN & RPN::operator =(const RPN &a)
{
    (void)a;
    return(*this);
}

void RPN::ParseMath(std::string input)
{
    int i;
    int operatorflag;
    int contnum;
    std::string ope = "+/*-";

    operatorflag = 0;
    i = 0;
    contnum = 0;
    for(;(size_t) i != input.length(); i++)
    {
        if(input[i] < '0' || input[i] > '9')
        {
            if(input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/')
            {
                if(input[i] != ' ')
                {
                    std::cerr << REDCOLOR << "Error: no number -> " << input[i] << ENDCOLOR << std::endl;
                    exit(0);
                }
            }
            else
                operatorflag++;
        }
        else
        {
			contnum++;
			if(input[i + 1] >= '0' && input[i + 1] <= '9')
				throw std::invalid_argument("Error: please use only numbers since 0 to 9");
		}
		if(contnum <= operatorflag)
			throw std::invalid_argument("Error: operator in bad position");
    }
    if(operatorflag == 0)
    {
        throw std::invalid_argument("Error: need a operator");
    }
	else if(contnum - operatorflag != 1)
	{
		throw std::invalid_argument("Error: too many operators or numbers");
	}

}

void RPN::Calculate(std::string input)
{
    std::string ope = "+/*-";
	size_t op, num;
	op = num = 0;
	for (size_t i = 0; i < input.length() ; i++)
	{
		if (isdigit(input[i]))
		{
			num++;
			this->_numbers.push(input[i] - '0');
		}
		else if (ope.find(input[i]) < 4)
		{
			op++;
			int n1 = _numbers.top();
			_numbers.pop();
			_numbers.top() = Result(n1, _numbers.top(), input[i]);
		}
		else if (isspace(input[i]))
			continue;
		else
			throw std::invalid_argument("Invalid Input");
	}
    std::cout << _numbers.top() << std::endl;
}

int RPN::Result(int n1, int n2, char op)
{
    switch (op)
	{
		case '+':
			return (n1 + n2);
		case '-':
			return (n2 - n1);
		case '*':
			return (n1 * n2);
		case '/':
		{
			if (n1 == 0)
				throw std::invalid_argument("Error Dividing on zero");
			return (n2 / n1);
		}
	}
	return (0);
}

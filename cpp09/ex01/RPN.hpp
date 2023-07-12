#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stack>

#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"

class RPN
{
    public:
        RPN();
        RPN(const RPN &a);
        ~RPN();
        RPN &operator = (const RPN &a);
        void ParseMath(std::string input);
        void Calculate(std::string input);
        int Result(int n1, int n2, char op);
    private:
        std::stack<int> _numbers;
};

#endif

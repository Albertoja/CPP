#include "RPN.hpp"

int main(int argc, char *argv[])
{
    RPN Calculator;

    if(argc != 2)
    {
        std::cerr << REDCOLOR << "Error: number of arguments" << ENDCOLOR << std::endl;
        exit(0);
    }
    try
    {
        Calculator.ParseMath(argv[1]);
        Calculator.Calculate(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << REDCOLOR << e.what() << ENDCOLOR << std::endl;
        exit(0);
    }
    
}

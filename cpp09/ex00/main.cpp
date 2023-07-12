#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    BitcoinExchange DataMap;

    if (argc != 2)
    {
        std::cerr << "Error: bad number of arguments." << std::endl;
        exit(0);
    }
    else   
    {
        try
        {
            DataMap.ReadBase();
            DataMap.ReadInput(argv[1]);
        }
        catch(std::exception &e)
        {
            std::cerr << REDCOLOR << "Error: garbled input" << ENDCOLOR << std::endl;
        }
    }
}

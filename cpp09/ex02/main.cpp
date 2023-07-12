#include "PmergeMe.hpp"

bool flag = false;
unsigned int tmp;

template <typename T, typename S, typename V>

void    Algorithm(int argc, T &container, S &cont, V &conta, char choice, bool flag)
{
    struct timeval start, end;
    long sec, micro;
    gettimeofday(&start, NULL);
    for (size_t i = 0; i < container.size(); i++)
    {
        if (container[i].first > container[i].second)
            std::swap(container[i].first, container[i].second);
    }
    for (size_t i = 0; i < container.size(); i++)
        conta.push_back(container[i].first);

    for (size_t i = 0; i < container.size(); i++)
        cont.push_back(container[i].second);

    std::sort(conta.begin(), conta.end());

    for (size_t i = 0; i < cont.size(); i++)
        conta.insert(std::lower_bound(begin(conta), conta.end(), cont[i]), cont[i]);
    if (flag)
        conta.insert(std::lower_bound(conta.begin(), conta.end(), tmp), tmp);

    if(choice == 'v')
    {
        std::cout << "\nAfter  : "; 
        if (conta.size() < 6)
        {
            for (size_t i = 0; i < conta.size(); i++)
                std::cout << conta[i] << " ";
        }
        else
        {
            for (int i = 1; i < 6; i++)
                std::cout << conta[i] << " ";
            std::cout << "[...]";
        }
    }
    gettimeofday(&end, NULL);
    sec = end.tv_sec - start.tv_sec;
    micro = end.tv_usec - start.tv_usec;
    long diff = (sec / 1000000) + (micro);
    if(flag == false)
        argc -=1;
    if (choice == 'v')
        std::cout << "\nTime to process a range of " << argc << " elements with std::vector : " << diff  << " us" << std::endl;
    if (choice == 'd')
        std::cout << "Time to process a range of " << argc << " elements with std::deque : " << diff  << " us" << std::endl;
}

void checkfirst(int argc, char *argv[])
{
    int i;
    int j;
    if(argc > 1)
        argc -= 1;
    else if(argc == 1)
        exit(0);
    for(i = 1; i <= argc; i++)
    {
        for(j = 0; j <= (int)strlen(argv[i]) - 1; j++)
        {
            if((argv[i][j] < '0' || argv[i][j] > '9'))
            {
                if(argv[i][j] != ' ')
                {
                    std::cerr << "Error: only numbers" << std::endl;
                    exit(0);
                }
            }
        }
    }
}

void VectorMode(int argc, char *argv[], bool flag)
{
    std::vector<std::pair<unsigned int, unsigned int> > vec;
    for (int i = 1; i < argc; i+=2)
    {
        if (isdigit(*argv[i]))
        {  
            vec.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i + 1])));
        }
        else
        {
            std::cerr << "\nError: only numbers" << std::endl;
            exit(0);
        }
    }
    std::vector<unsigned int> vec_a, vec_b;
    Algorithm(argc, vec, vec_a, vec_b, 'v', flag);
}

void DequeMode(int argc, char *argv[], bool flag)
{
    std::deque<std::pair<unsigned int, unsigned int> > dec;
    for (int i = 1; i < argc; i+=2)
    {
        if (isdigit(*argv[i]))
        { 
            dec.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i + 1])));
        }
    }
    std::deque<unsigned int> dec_a, dec_b;
    Algorithm(argc, dec, dec_a, dec_b, 'd', flag);
}

int main(int argc, char *argv[])
{

    checkfirst(argc, argv);
    std::cout << "Before : "; 
    if (argc < 6)
    {
        for (int i = 1; i < argc; i++)
            std::cout << argv[i] << " ";
    }
    else
    {
        for (int i = 1; i < 6; i++)
            std::cout << argv[i] << " ";
        std::cout << "[...]";
    }
    if ((argc - 1) % 2 != 0)
    {
        flag = true;
        tmp = std::atoi(argv[argc - 1]);
        if (std::atoi(argv[argc - 1]) < 0)
            exit(1);
        argc-=1;
    }

    VectorMode(argc, argv, flag);
    DequeMode(argc, argv, flag);
}

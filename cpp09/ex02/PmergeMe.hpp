#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <sys/time.h>
#include <unistd.h> 

//`jot -r 3000 1 1000 | tr '\n' ' '`

class PmergeMe
{
    private:
       
    public:
        PmergeMe ();
        PmergeMe (const PmergeMe &a);
        ~PmergeMe ();
        PmergeMe & operator = (const PmergeMe &a);
};

#endif

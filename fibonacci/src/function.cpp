#include "function.h"
#include <iostream>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    vector<unsigned int> fibo={};
    vector<unsigned int>::iterator somar;
    unsigned int val=1;

    if(n>1){
        fibo.push_back(val);
        while (val<n)
        {
            fibo.push_back(val);
            val = *fibo.end()-1 + *fibo.end()-2;
        }
        for (auto i=fibo.begin(); i != fibo.end(); i++)
        {
            std::cout<< *i << " " <<std::endl;
        }
        return std::vector<unsigned int>{};
    }else{
        return std::vector<unsigned int>{};
    }
}

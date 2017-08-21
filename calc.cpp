#include <iostream>
#include <calc.h>

namespace calc
{
    int pow(int i, int j)
    {
        int d = 0;

        for(int c = 0; c<j; c++)
        {
            d = d + i*i;    
        }
        return d;
    }
}


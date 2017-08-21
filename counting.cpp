#include <iostream>
#include <string>

int PrintCount(int c,char* msg)
{
    for(int i = 0; i< c; i++)
    {
        std::cout << i << msg;
    }
    return 0;
}

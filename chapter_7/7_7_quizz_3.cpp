#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main()
{
    int outer{5};
    while(outer > 0)
    {
        int inner{0};
        while(inner < outer)
        {
            std::cout<<outer -inner<<" ";
            ++inner;
        }
        std::cout<<"\n";
        --outer; 
    }
    return 0;
}
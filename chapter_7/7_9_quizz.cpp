#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void print_even_num()
{
    for(int i;i<=20;i+=2)
    {
        std::cout<<i<<" ";
    }
}
int sumto(int num)
{
    int sum{0};
    for(int i{1};i<=num;++i)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    //print_even_num();
    //std::cout<< sumto(5);
    return 0;
}

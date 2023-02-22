#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int calculate(int x,int y,char op)
{
    switch(op)
    {
        case '+':
            return x+y;
        case '-':
            return x-y;
        case '*':
            return x*y;
        case '/':
            return x/y;
        default:
            std::cerr<<"Error";
            return 0;
    }
}


int main()
{
    int x{};
    std::cout<<"X:";
    std::cin>>x;
    int y{};
    std::cout<<"Y:";
    std::cin>>y;
    char op{};
    std::cout<<"Operator:";
    std::cin>>op;
    int result{};
    result = calculate(x,y,op);
    std::cout<<result;
    return 0;
}
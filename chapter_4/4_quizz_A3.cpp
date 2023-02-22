#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string_view>

int main()
{
    using namespace std::literals;
    double z1,z2,z3;
    char op;
    std::cout<<"Enter a double value:\n";
    std::cin >> std::ws>>z1;
    std::cout<<"Enter a double value:\n";
    std::cin >> std::ws>>z2;
    std::cout<<"Enter one of the following: +,-,* or /\n";
    std::cin >> std::ws>>op;
    if (op == '*')
    {
        z3 = z1*z2;
        std::cout<< z1 <<" "<< op<<" "<< z2 <<" "<< "is" <<" "<<z3;
    }  
    else if(op == '-')
    {
        z3 = z1-z2;
        std::cout<< z1 <<" "<< op<<" "<< z2 <<" "<< "is" <<" "<<z3;
    }    
    else if(op == '+')
    {
        z3 = z1 + z2;
        std::cout<< z1 <<" "<< op<<" "<< z2 <<" "<< "is" <<" "<<z3;
    }
    else if(op == '/')
    {
        z3 = z1/z2;
        std::cout<< z1 <<" "<< op<<" "<< z2 <<" "<< "is" <<" "<<z3;
    }
    else
        std::cout<<" ";

    
}
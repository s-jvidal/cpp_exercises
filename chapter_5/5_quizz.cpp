#include <iostream>


bool isEven(int a)
{
    return (a%2)==0;
}

int main()
{   
    int num{};
    std::cout<<"Enter an Integer: \n";
    std::cin>>num;
    std::cout<< std::boolalpha<< isEven(num);
	return 0;
}
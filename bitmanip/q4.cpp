#include <cstdint>
#include <iostream>

void print_bin_num(int a)
{
    int b = a;
    int counter {8};
    while(a > 1)
    {
        std::cout << b%2;
        //std::cout<< a<<"\n";
        a /= 2;
        b = a;
        --counter;
    }
    if (a==1)
    {
        std::cout << 1;
        --counter;
    }
    while(counter !=0)
    {
        std::cout << 0;
        --counter;
    }
}

int main()
{
    int testnum{};
    std::cout<< "Bitte Zahl zw. 0 und 255 eingeben:\n";
    std::cin >> testnum;
    print_bin_num(testnum);
}
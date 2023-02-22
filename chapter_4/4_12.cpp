#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void print(int x)
{
    std::cout<< x;
}

int main()
{
    char ch{};
    std::cout << "Enter a Charakter:";
    std::cin >> ch;
    std::cout << "Charakter:'" << ch << "'ASCII:" << std::endl;
    print(ch);
}
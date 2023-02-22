#include <iostream>

int main()
{
    int smaller {};
    int larger {};
    std::cout<<"Enter smaller val:\t";
    std::cin >> smaller;
    std::cout<<"Enter larger val:\t";
    std::cin >> larger;
    
    if(smaller > larger)
    {
        int temp = larger;
        larger = smaller;
        smaller = temp;
    }
    std::cout<<"smaller: "<<smaller<<"\nlarger "<<larger;
    return 0;
}
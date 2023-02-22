#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*97 bis 122*/

void print_atoz()
{
    int counter{97};
    while(counter < 123)
    {
        std::cout<<counter<<"\t"<<static_cast<char>(counter)<<"\n";
        ++counter;
    }
}


int main()
{
    print_atoz();
    return 0;
}
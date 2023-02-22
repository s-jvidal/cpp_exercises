#include <iostream>
#include <cassert>
#include<math.h>

bool isPrime(int x)
{
    if(x<=1)
        return 0;
     
    for(int i=1;i<=std::sqrt(x);++i)
    {
        if(x!=i && i!=1)
        {
            if(x%i==0)
                return 0;
            else
                ;
        }
    }
    return 1;
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
#include <bitset>
#include <iostream>
#include<stdlib.h>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    bool bit{};
    std::bitset<4> testvar{0b1000};
    testvar &= bits; 
    if(testvar == 0b1000 )
    bit = true;
    else
    bit = false;
    bits <<= 1;
    if(bit)
    bits |= 0b0001;
    if(!bit)
    bits &= 0b1110;
    return bits;
// Your code here
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';
    std::cout << static_cast<std::bitset<8>>(68);
	return 0;
}
#include <iostream>

int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
    {
        int test {30};
        return test;
    }
    return 20;
}

int main()
{
    const int classSize { getClassSize(true) };
    std::cout << "The class size is: " << classSize << '\n';

    return 0;
}
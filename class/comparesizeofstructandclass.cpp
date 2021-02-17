#include<iostream>


struct testS
{
    char a;
    float b;
    int c;
};

class testC{
    char a;
    float b;
    int c;
};

int main()
{
    std::cout << sizeof(testS) << "\n" << sizeof(testC) << "\n";
    return 0;
}

// size of class without a member data type is 1
#include<iostream>
using namespace std;

class Test
{
    
};

int main()
{
    Test t1;
    cout << sizeof(t1) << endl;
    return 0;
}
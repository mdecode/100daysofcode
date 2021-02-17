//Function is a piece of code that performs specific task
/* Function syntax returnType functionName(parameter1, parameter2,...)
        funtion body
 */

#include<iostream>
using namespace std;

void factorial(int n)
{
        int fact = 1;
        for(int i = n; i>=1;i--)
        {
                fact *= i;
        }
        cout << fact << "\n";
        return;
}

int main()
{
    
    int n; 
    cin >> n;

    factorial(n);
    return 0;
}
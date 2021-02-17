//Function is a piece of code that performs specific task
/* Function syntax returnType functionName(parameter1, parameter2,...)
        funtion body
 */

#include<iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0,t2 = 1;
    int nextTerm;
    for(int i =1; i<=n;i++)
    {
        cout << t1 << endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; 
    cin >> n;

    fib(n);
    return 0;
}
#include<iostream>
using namespace std;

int factorial(int n)
{
    int factNum = 1;
    for(int i = 2; i<=n; i++)
    {
        factNum *= i;
    }
    return factNum;
}

int main()
{

    int n,r;
    cin >> n >> r;

    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    cout << ans;
    return 0;
}
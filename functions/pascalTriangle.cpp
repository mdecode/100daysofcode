#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 2; i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            int ans = factorial(i)/(factorial(i-j)*factorial(j));
            cout << ans << " " ;
        }
        cout << "\n";
    }
    return 0;
}
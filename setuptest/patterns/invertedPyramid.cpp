//To print hollow rectangle , we need to fill the middle part of rectangle with space

#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int n = 0;
    cin >> n ; 

    for(int i = n; i >= 1;--i)
    {
        for (int j=1; j <= i; ++j)
        {
           cout << "*";
        }
        cout << endl; //because after every row, we need to go to next line
    }

    return 0;
}
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

    for(int i = 1; i <=n; i++)
    {
        //This is for upper part of the butterfly pattern
        for(int j = 1; j <= i; j++)
        {
            cout << "*"; // to print * as number of rows
        }
        int space = 2*n -2*i;
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*"; // to print * as number of rows
        }
        cout << endl;
    }
    //second inverted part of the butterfly
    for(int i = n; i >=1; i--)
    {
        //This is for upper part of the butterfly pattern
        for(int j = 1; j <= i; j++)
        {
            cout << "*"; // to print * as number of rows
        }
        int space = 2*n -2*i;
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*"; // to print * as number of rows
        }
        cout << endl;
    }
    return 0;
}
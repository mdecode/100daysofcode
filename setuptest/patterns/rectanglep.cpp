#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int row = 0,col = 0;
    cin >> row >> col; 

    for(int i = 1; i <=row;++i)
    {
        for (int j=1; j <= col; ++j)
        {
            cout << "*" ;
        }
        cout << endl; //because after every row, we need to go to next line
    }

    return 0;
}
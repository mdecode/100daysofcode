/*Program takes row and column value to dispay rectangle with \* 
Dated: 01-02-2021 
Author: mdecode*/
#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int row = 0, col = 0;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for(int j = 1; j <=col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
//To print hollow rectangle , we need to fill the middle part of rectangle with space

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
            if(i == 1 || i == row)
            {
                cout << "*" ;
            }
            else if(j==1 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
            
        }
        cout << endl; //because after every row, we need to go to next line
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n = 0;
    cin >> n ;

    for (int i = n; i >= 1; i--) // n number of rows
    {
        for (int j = 1; j <= i; j++) // each column contains  row number of columns      
        {
            cout << "*";
        }
        
        cout << endl; // after end of each row
    }
    
     
    return 0;
}


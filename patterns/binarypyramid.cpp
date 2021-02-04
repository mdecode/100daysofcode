#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n = 0;
    cin >> n ;

    for (int i = 1; i <= n; i++) // n number of rows
    {
        for (int j = 1; j <= i; j++) // each column contains  row number of columns      
        {
            if((i+j)%2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            
        }
        
        cout << endl; // after end of each row
    }
    
     
    return 0;
}


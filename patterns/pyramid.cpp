/* In the pyramid strucure, the firsr row contains one star
    The second row contain two and so on. So we need to first iterate through each row, and in each row 
    print row number of stars 
    That is why itereate i 1 to n next j 1 to i, and print the stars*/

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
            cout << "*";
        }
        
        cout << endl; // after end of each row
    }
    
     
    return 0;
}


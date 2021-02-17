#include<iostream>
#include<math.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n = 0;
    cin >> n;
    int temp,armstrong;
    temp = n;
    while (n > 0)
    {
        int digit = n % 10;
        armstrong += pow(digit,3);
        n = n/10;
    }
    
    if( temp == armstrong)
    {
        cout << "The number is an Armstrong number" << "\n";
    }
    else
    {
        cout << "The number is not an Armstrong number" << "\n";
    }
    
    return 0;
}


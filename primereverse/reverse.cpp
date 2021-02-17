#include<iostream>
#include<cmath>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n = 0;
    int reverse;
    cin >> n ;
     
    while(n > 0)
    {
        int lastdigit = n%10; // This is to get last digit of the number
        reverse= reverse * 10 + lastdigit; // Add last digits to thei respective decimal places, hence multiply by 10
        n = n/10; // take the next last digit
    }
    cout << reverse;
    return 0;
}


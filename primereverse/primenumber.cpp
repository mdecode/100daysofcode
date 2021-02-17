#include<iostream>
#include<cmath>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n = 0;
    cin >> n ;
    bool flag =0;
    for(int i = 2; i <=sqrt(n);i++)
    {
        if(n%i == 0) // divisible by number other than itself aswell
        {
            cout << "Non Prime Number" << "\n";
            flag = 1;
            break;
        }
        if(flag == 0)
        {
            cout << "Prime Number" << "\n";
        }

    }   
     
    return 0;
}


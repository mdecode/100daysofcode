//To print hollow rectangle , we need to fill the middle part of rectangle with space

#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int n = 0,count = 0;
    cin >> n ; 

    for(int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count = count + 1;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}
/* Divisor: the number which can divide the given natural number, such that the remainder is 0.
   i.e n%divisor = 0
   Find count of divisors of given natural number
   Here instead of taking for loop for all n input, we can use upto sqrt(n)
   and find the pairs of divisors, This will reduce the time complexity for larger input.
   Divisors of 50 are : 1,2,5,10,25,50
 */

#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    
    int n; 
    cin >> n;

    int count = 0;

    for(int i = 1;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            if(n/i == i)
            {
                count++;
            }
            else
            {
                count++;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
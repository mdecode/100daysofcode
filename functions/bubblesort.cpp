#include<iostream>
using namespace std;

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubblesort(int arr[], int n)
{
    int i , j;
    for(i = 0; i<n-1;i++)
    {
        for(j = 0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                 swap(&arr[j],&arr[j+1]);
            }
           
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 6, 3 ,9, 23,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;
}


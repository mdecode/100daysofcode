#include<iostream>
#include<vector>

using namespace std;

void Display(vector<int> &v)
{
    for(int i = 0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout<< endl;
}

int main()
{
    vector<int> vec;
    int element;
    for(int i =0; i<4;i++)
    {
        cout << "Eneter element to add to the vector" << endl;
        cin >> element;
        vec.push_back(element);
    }
    Display(vec);
    return 0;
}
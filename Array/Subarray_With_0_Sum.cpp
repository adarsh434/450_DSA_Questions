#include<bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n)
{
    set <int> s;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        s.insert(sum);
        sum = sum + arr[i];
    }
    s.insert(sum);
    if(s.size() != n)
        return true;
    else
        return false;
}



int main()
{ 
    int a[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    set <int> s(a+1, a+2);
    for(int x: s)
        cout<<x<<endl;
}
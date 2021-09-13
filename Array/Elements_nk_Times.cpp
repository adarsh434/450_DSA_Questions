#include<bits/stdc++.h>
using namespace std;

void elements_nk_Times(int arr[], int n, int k)
{
    map <int, int> m;
    int size = n/k;
    set <int> s;
    for(int i = 0; i<n; i++)
    {
        m[arr[i]] += 1;
        if(m[arr[i]] > size)
            s.insert(arr[i]);
    }
    for(int x:s)
        cout<<x<<' ';
}

int main()
{ 
    int arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    elements_nk_Times(arr, n, k);
    cout<<endl;
}
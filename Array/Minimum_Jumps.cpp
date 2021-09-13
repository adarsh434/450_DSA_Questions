#include<bits/stdc++.h>
using namespace std;

int minimum_jumps(int arr[], int n)
{
    int jumps = 0;
    int ans = n-1;
    int i = 0;
    while(ans>0)
    {
        jumps++;
        set <int> s(arr+(i+1), arr+(arr[i]+1+i));
        for(int x:s)
            cout<<x;
        cout<<endl;
        int max = *s.rbegin();
       
        int index = distance(arr, find(arr, arr+n, max));
        ans = ans - (index - i);
        if(ans - max <=0)
        {
            jumps++;
            break;
        }
        i = index;

       // cout<<s.size()<<endl;
        //cout<<(*s.rbegin())<<endl;
    }
    return jumps;
}

int main()
{ 
    int a[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<minimum_jumps(a, size)<<endl;
}
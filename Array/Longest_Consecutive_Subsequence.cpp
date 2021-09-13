#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
    int ans = 0, previous = -2, count = 1;
    set <int> s(arr, arr+N);
    for(int x: s)
    {
        if(x == previous+1)
            count++;
        else
        {
            ans = max(ans, count);
            count = 1;
        }
        previous = x;
    }
    ans = max(ans, count);
    return ans;
}

int main()
{ 
    int n = 7;
    int a[] = {2,6,1,9,4,5,3};
    cout<<findLongestConseqSubseq(a, n)<<endl;
}
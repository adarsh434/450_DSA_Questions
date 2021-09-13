#include<bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int n, int X)
{
    map <int, int> values;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            int left = (X - A[i] - A[j]);
            auto it = values.find(left);
            if(it != values.end() && it->second != i && it->second != j)
                return true;
        }
        values[A[i]] = i;
    }
    return false;
}

int main()
{ 
    int a1[] = {10, 5, 2, 23, 19};
    int size1 = sizeof(a1)/sizeof(a1[0]);
    cout<<find3Numbers(a1, size1, 17)<<endl;
}
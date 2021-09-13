#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) 
{
    map <int, int> values;
    int count = 0;
    
    for(int i = 0; i<n; i++)
        values[a1[i]] += 1;
    for(int i = 0; i<m; i++)
    {
        values[a2[i]] += 1;
        if(values[a2[i]] == 2)
            count++;
    }
    if(count == m)
        return "Yes";
    else
        return "No";
}

int main()
{ 
    int a1[] = {10, 5, 2, 23, 19};
    int a2[] = {19, 5, 3};
    int size1 = sizeof(a1)/sizeof(a1[0]);
    int size2 = sizeof(a2)/sizeof(a2[0]);
   cout<<isSubset(a1, a2, size1, size2)<<endl;
}
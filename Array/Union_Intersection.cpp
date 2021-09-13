#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    return s.size();
}

int main()
{ 
    int a[] = {85, 25, 1, 32, 54, 6};
    int b[] = {85, 2};
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    cout<<"UNION: "<<doUnion(a, size1, b, size2)<<endl;
}
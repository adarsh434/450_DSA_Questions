#include<bits/stdc++.h>
using namespace std;

long long largest_sum(int arr[], int size)
{
    int tillnow = arr[0];
    int curr = arr[0];

    for (int i = 1; i < size; i++)
    {
        curr = max(arr[i], curr*arr[i]);
        tillnow = max(tillnow, curr);
    }
    return tillnow;
}

int main()
{ 
    int a[] = {6, -3, -10, 0, 2};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<largest_sum(a, size)<<endl;
}
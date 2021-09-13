#include<bits/stdc++.h>
using namespace std;

long long minimize_height(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int minEle, maxEle;
    int result = arr[n-1] - arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] >= k)
        {
            //smaller value is increased   
            maxEle = max(arr[i-1]+k, arr[n-1]-k);

            //larger value is decreased
            minEle = min(arr[i]-k, arr[0]+k);
            
            //compare resultant value
            result = min(result, maxEle-minEle);
        }
    }
    return result;
}

int main()
{ 
    int a[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<minimize_height(a, size, 5)<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int Kth_smallest_element(int arr[], int start, int end, int k)
{
    sort(arr, arr+(end+1));
    return arr[k-1];
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = Kth_smallest_element(arr, 0, size - 1, k);
    cout<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int count = 0;

    i = left;
    j = mid;
    k = left;
    while(i <= mid-1 && j <= right)
    {
        if(arr[i] > arr[j])
        {
            count = count + (mid-i);
            j++;
        }
        else
            i++;
    }
    return count;
}

int mergeSort(int arr[], int left, int right)
{
    int mid, count=0;
    if(right > left)
    {
        mid = (left+right)/2;

        count += mergeSort(arr, left, mid);
        count += mergeSort(arr, mid+1, right);

        count += merge(arr, left, mid+1, right);
    }
    return count;
}

int main()
{ 
    int a[] = {5, 4, 3, 2, 1};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<mergeSort(a, 0, size - 1)<<endl;
}
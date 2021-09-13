#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void negative_numbers(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) 
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    printArray(arr, size);
}

int main()
{ 
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    negative_numbers(arr, n);
    
}
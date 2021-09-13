#include<bits/stdc++.h>
using namespace std;

void cyclic_rotate(int arr[], int size)
{
    for(int i = size-1; i>0; i--)
    {
        swap(arr[i-1], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{ 
    int a[] = {85, 25, 1, 32, 54, 6};
    int size = sizeof(a)/sizeof(a[0]);
    cyclic_rotate(a, size);
    printArray(a, size);
}
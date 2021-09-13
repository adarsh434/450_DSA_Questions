#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void sort_array(int arr[], int size)
{
    int zero = 0, one = 0, two = 0;
    for(int  i =0; i<size; i++)
    {
        if(arr[i] == 0)
            zero++;
        else if(arr[i] == 1)
            one++;
        else if(arr[i] == 2)
            two++; 
    }
    int i = 0;
    while (zero > 0) 
    {
        arr[i++] = 0;
        zero--;
    }
 
    while (one > 0) 
    {
        arr[i++] = 1;
        one--;
    }
 
    while (two > 0) 
    {
        arr[i++] = 2;
        two--;
    }
    printArray(arr, size);
}

int main()
{
    int arr[] = {0, 2, 1, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort_array(arr, n);
    
}
#include<bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n)
{
    vector <int> maxLeft;
    vector <int> maxRight;
    long long int maximum = 0, ans = 0;

    for(long long int i = 0; i<n; i++)
    {
        maxLeft.push_back(maximum);
        if(arr[i] >= maximum)
            maximum = arr[i];
    }
    maximum = 0;
    for(long long int i = n-1; i>=0; i--)
    {
        maxRight.push_back(maximum);
        if(arr[i] >= maximum)
            maximum = arr[i];
    }
    reverse(maxRight.begin(), maxRight.end());

    for(long long int i = 0; i<n; i++)
    {
        int minimum = min(maxLeft[i], maxRight[i]);
        if(minimum > arr[i])
            ans = ans + (minimum - arr[i]);
    }

    return ans;  
}

int main()
{ 
    //int a1[] = {4,2,0,3,5,1};
    int a1[] = {8, 8, 2, 4, 5, 5, 1}; //ans = 4
    int size1 = sizeof(a1)/sizeof(a1[0]);
    cout<<trappingWater(a1, size1)<<endl;
}
#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    long long int start = 0, end = m-1, min = INT_MAX;
    while(end<n)
    {
        if(a[end] - a[start] < min)
            min = a[end] - a[start];
        end++;
        start++;
    }
    return min;
} 

int main()
{ 
    vector <long long int> a1 = {3, 4, 1, 9, 56, 7, 9, 12};
    long long int m = 5;
    long long int size1 = a1.size();
    cout<<findMinDiff(a1, size1, m)<<endl;
}
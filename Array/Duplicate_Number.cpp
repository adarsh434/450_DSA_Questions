#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) 
{
    int i = 0;
    sort(nums.begin(), nums.end());
    while(i<nums.size()-1)
    {
        if(nums[i] == nums[i+1])
            break;
        i++;
    }
    return nums[i];
}

int main()
{
    vector <int> num = {1,2,3,4,5,1};
    cout<<findDuplicate(num)<<endl;
}
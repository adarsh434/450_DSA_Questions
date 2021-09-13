#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
{
    set <int> sameValues;
    vector <int> ans;
            
    int i = 0, j = 0;
    while(i<n1 && j<n2)
    {
        if(a[i] == b[j])
        {
            sameValues.insert(a[i]);
            i++, j++;
        }
        else if(a[i] <b[j])
            i++;
        else
            j++;
    }
        
    auto it = sameValues.begin();
    j = 0;
    while(it != sameValues.end() && j<n3)
    {
        if(*it == c[j])
        {
            ans.push_back(c[j]);
            it++, j++;
        }
        else if(*it < c[j])
            it++;
        else
            j++;   
    }
    return ans;
}


int main()
{ 
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6, n2 = 5, n3 = 8;
    vector <int> ans = {commonElements(A, B, C, n1, n2, n3)};
    for (int i = 0; i<ans.size(); i++)
        cout<<ans[i]<<' ';
    cout<<endl;
}
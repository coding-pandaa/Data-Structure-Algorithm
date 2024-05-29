//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//TC-> O(n)
// SC-> O(1)

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &v,int n) {
    if(n==1)
    {
        return 1;
    }
    int i=0,j=1;
    for(int j=1;j<n;j++)
    {
        if(v[j]!=v[i])
        {
            i++;
            v[i]=v[j];
        }
    }
    return i+1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<removeDuplicates(v,n);
}
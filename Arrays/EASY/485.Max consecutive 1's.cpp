//https://leetcode.com/problems/max-consecutive-ones/description/
//Find the maximum number of consecutive one's present in the given array 
//Optimized solution
//TC-> O(n)
//SC -> O(1)

#include<bits/stdc++.h>
using namespace std;
int maxConsecutive(vector<int> &v,int n) {
    int count=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=1)
        {
            maxi=max(maxi,count);
            count=0;
        }
        else
        {
            count++;
        }
    }
    maxi=max(maxi,count);
    return maxi;
}



int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;cin >> temp;
        v.push_back(temp);
    }
    cout<<maxConsecutive(v,n);
}
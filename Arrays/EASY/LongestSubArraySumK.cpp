//This is the better approach for this problem(only positives), but this is optimal for if the array contains 0 and negatives as well. 
//And for only positives it is a better solution. 
//TC -> O(nlog)
//SC->O(n)

#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int> &arr,int n,int k)
{
    int sum=0;
    int maxi=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==k)
        {
            maxi=max(maxi,i+1);
        }
        int rem= sum-k;
        if(mp.find(rem)!=mp.end())
        {
            int len=i-mp[rem];
            maxi=max(len,maxi);
        }
        if(mp.find(sum)==mp.end())
        {
            mp[sum]=i;
        }
    }
    return maxi;

}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<longestSubarray(v,n,k);
}

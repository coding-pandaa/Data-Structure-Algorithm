#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &v,int n,int k)
{
    unordered_map<int,int> mp;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        if(mp.find(k-v[i])!=mp.end())
        {
            res.push_back(i);
            res.push_back(mp[k-v[i]]);
        }
        mp[v[i]]=i;
    }
    return res;
}
void printArray(vector<int> v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int> res;
    res=twoSum(v,n,k);
    printArray(res);
}
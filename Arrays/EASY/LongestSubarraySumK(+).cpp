//This is the most optimized solution only if the array has positive integers
//TC->O(2*n)
//SC-> O(1)

#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int> &arr,int n,int k)
{
    int i=0,j=0;
    int sum=arr[0];
    int maxi=0;
    while(j<n)
    {
        while(sum >k && i<=j)
        {
            sum=sum-arr[i];
            i++;
        }
        if(sum==k)
        {
            maxi=max(maxi,j-i+1);
        }
        j++;
        sum=sum+arr[j];

        
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
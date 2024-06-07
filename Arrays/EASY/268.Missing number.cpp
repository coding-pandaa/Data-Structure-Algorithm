//TC-> O(nlogn)+O(n)
//Brute force
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> & nums) 
{
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return n;
        
    }

int main()
{
    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<missingNumber(v);

}
    
//DUTCH NATIONAL FLAG ALGORITHM
//Most optimized solution
//TC-> O(n)
//SC-> O(1)

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int low=0,mid=0;
        int n=nums.size();
        int high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;

            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[high],nums[mid]);
                high--;

            }
        }
        
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
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sortColors(v);
    printArray(v);
}
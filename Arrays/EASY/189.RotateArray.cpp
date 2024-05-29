// Leetcode problem (https://leetcode.com/problems/rotate-array/)
//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//Optimal
//TC-> O(2n)
//SC _> O(1)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        k=n-k;
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+n);
        
    }
    void printArray(int n,vector<int> &v)
    {
    for(int i=0;i<n;i++){
        cout<<v[i];
        cout<<" ";
    }
}

};
int main()
{
    Solution s;
    int n,d;
    cin>>n>>d;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    s.rotate(v,d);
    s.printArray(n,v);
}
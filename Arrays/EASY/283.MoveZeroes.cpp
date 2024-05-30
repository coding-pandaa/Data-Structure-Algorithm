//https://leetcode.com/problems/move-zeroes/submissions/1272091864/
//Move all zeroes to the right side of the array
//TC-> O(n)


#include<bits/stdc++.h>
using namespace std;
int moveZeroes(vector<int> &v,int n) {
    if(n==1)
    {
        return 0;
    }
    int i=0,j=1;
    for(int j=1;j<n;j++)
    {
        if(v[i]==0 && v[j]!=0)
        {
            swap(v[i],v[j]);
            i++;
        }
        else if(v[i]!=0)
        {
            i++;
        }
    }
    
}
void printArray(int n,vector<int> &v)
{
    for(int i=0;i<n;i++){
        cout<<v[i];
        cout<<" ";
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
    moveZeroes(v,n);
    printArray(n,v);
    
}
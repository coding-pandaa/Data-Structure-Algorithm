//Leetoce Question ->https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include<bits/stdc++.h>
using namespace std;
bool checkArray(vector<int>& v,int n)
{
    //3 5 7 9 1 2
    //5 6 7 8 4 3
    //5 6 7 8 4 6 
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            count++;
        }
    }
    if(v[n-1]>v[0])
    {
        count++;
    }
    return count<=1;
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
    cout<<checkArray(v,n);
}
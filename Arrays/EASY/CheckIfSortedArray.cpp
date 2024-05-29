//Check if an array is sorted or not in descending way
//Optimised Solution
// TC-> O(n)

#include<bits/stdc++.h>
using namespace std;
bool checkArray(vector<int> &v, int n)
{
    for(int i=1;i<n;i++)
    {
        if(v[i]>=v[i-1])
        {
            continue;
        }
        else
        {
            return false;
        }

    }
    return true;
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
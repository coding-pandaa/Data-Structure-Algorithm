// Find the largest element in an array.
//Optimal Approac
// TC -> O(n)
// SC -> O(1)
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &v,int n)
{
    int largest=v[0];
    for(int i=1;i<n;i++)
    {
        if(largest<v[i])
        {
            largest=v[i];
        }
    }
    return largest;
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
    cout<<largestElement(v,n);
}
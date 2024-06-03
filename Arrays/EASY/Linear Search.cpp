//Linear search to search for a specific number in an array
//TC -> O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            cout<<"Found";
            return 0;
        }
    }
    cout<<"Not found";
}
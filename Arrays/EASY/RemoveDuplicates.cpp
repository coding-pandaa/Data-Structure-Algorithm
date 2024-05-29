//Remove the duplicat elements from an array, the array may be sorted or not sorted
// TC-> O(n)
// SC -> O(n)

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &v,int n) {
    set<int> s;
    for(auto x:v)
    {
        s.insert(x);
    }
    return s.size();
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
    cout<<removeDuplicates(v,n);
}

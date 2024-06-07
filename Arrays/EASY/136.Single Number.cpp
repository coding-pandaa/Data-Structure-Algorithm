//Find the number which appears once and others twice
//Optimized solution
//TC-> O(n)
//SC->O(1)

#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &v,int n) {
    int xor1=0;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^v[i];
    }
    return xor1;
   
}



int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;cin >> temp;
        v.push_back(temp);
    }
    cout<<singleNumber(v,n);
}
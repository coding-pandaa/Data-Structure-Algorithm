//Optimal approac
//This is solved by using the XOR approach. 
//A^0 = A  and 0^0=0
//TC-> O(n)
//SC->O(1)

#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &v,int n) {
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^v[i];
        xor2=xor2^i;
    }
    xor2=xor2^n;
    return xor2^xor1;
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
    cout<<missingNumber(v,n);
}
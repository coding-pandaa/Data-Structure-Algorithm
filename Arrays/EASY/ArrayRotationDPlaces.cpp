//Rotate the array by D places
//Brute force approach 
//TC-> O(n+d)
//SC _> O(1)
#include<bits/stdc++.h>
using namespace std;
void rotateArray(int n, vector<int> &v, int d)
{
    d=d%n;
    if(d==0)
    {
        return;
    }
    int k=n-d;
    vector<int> temp;
    for(int i=0;i<=k;i++)
    {
        temp.push_back(v[i]);
    }
    for(int i=k+1;i<n;i++)
    {
        v[i-d]=v[i];
    }
    for(int i=k;i<n;i++)
    {
        v[i]= temp[i-k];
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
    int n,d;
    cin>>n>>d;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    rotateArray(n,v,d);
    printArray(n,v);
}
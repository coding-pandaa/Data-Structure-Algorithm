#include<bits/stdc++.h>
using namespace std;
void rotation(int n,vector<int> &v)
{
    int temp=v[0];
    int i=1;
    while(i<n){
        v[i-1]=v[i];
        i++;
    } 
    v[n-1]=temp;
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
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    int n= v.size();
    rotation(n,v);
    printArray(n,v);
}
//Find the second largest element in the array
//Better approach
//TC-> O(n+n) -> O(2n)
#include<bits/stdc++.h>
using namespace std;
int secondLargestElement(vector<int> &v,int n)
{
    int largest = -1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>largest)
        {
            largest=v[i];
        }
    }
    int sec_largest = -1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>sec_largest && v[i]!=largest) 
        {
            sec_largest=v[i];
        }
    }
    return sec_largest;
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
    cout<<secondLargestElement(v,n);
}
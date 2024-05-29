//Find the second largest element in the array
//Most optimal approach
//TC-> O(n)


#include<bits/stdc++.h>
using namespace std;
int secondLargestElement(vector<int> &v,int n)
{
    int largest=v[0],sec_largest=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>largest)
        {
            sec_largest=largest;
            largest=v[i];
        }
        else if(v[i]<largest && v[i]>sec_largest)
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
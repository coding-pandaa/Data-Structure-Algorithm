//To find the element which has the highest number of occurance or which occurs more than n/2 times.
//This is the most optimized solution
//Moore's voting algorithm

#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int> &arr)
{
    int n=arr.size();
        int j=0,count=0,x=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                j=i;
            }
            x=arr[j];
            if(arr[i]!=x)
            {
                count--;
            }
            else
            {
                count++;
            }           
        }
        return x;  
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
    cout<<maxElement(v);
}
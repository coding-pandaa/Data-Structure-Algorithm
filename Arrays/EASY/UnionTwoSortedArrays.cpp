//Find the union of two given sorted arrays
//The better approach is putting everything in each arrays directly into an integer set. And return the set
//Most optimized approach doesnot require a set, using a vector we can do it. Just by using 2 pointers approach
//TC-> O(n+m)
//SC-> O(n+m)  (But this space is also required just to return the result)

#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(vector<int> &v1,int n,vector<int> &v2,int m)
{
    vector<int> unionArr;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(v1[i]<=v2[j])
        {
            if(unionArr.size()!=0 && unionArr.back()==v1[i])
            {
                i++;
            }
            else{
                unionArr.push_back(v1[i]);
                i++;
            }
        }
        else
        {
            if(unionArr.size()!=0 && unionArr.back()==v2[j])
            {
                j++;
            }
            else
            {
                unionArr.push_back(v2[j]);
                j++;
            }
        }
    }

    while(i<n)
    {
        if(unionArr.back()==v1[i])
        {
            i++;
        }
        else
        {
            unionArr.push_back(v1[i]);
            i++;
        }
    }
    while(j<m)
    {
        if(unionArr.back()==v2[j])
        {
            j++;
        }
        else
        {
            unionArr.push_back(v2[j]);
            j++;
        }
    }
    return unionArr;
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
    int n,m;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        v2.push_back(temp);
    }
    vector<int> res;
    res=findUnion(v1,n,v2,m);
    int x=res.size();
    printArray(x,res);

}
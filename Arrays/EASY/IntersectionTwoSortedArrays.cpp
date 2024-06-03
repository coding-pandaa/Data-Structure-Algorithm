//Find the intersecting elements of two sorted arrays 
//Brute force Approach is -> Take two for loops and check if the element in one array is present in the second array. 
//And keep putting the elements in the result array. Along with that, keep track of a new array as visited, initially having all values as 0, as size as the second array and keep marking them 1 as they gets visited. 
//But this approach is using n^2 time and extra space O(n)
//Most optimal solution(using two pointer appproach)
//TC->O(n+m)
//SC->O(n+m)  (Becoz of just returning the answer)

#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &v1,int n,vector<int> &v2,int m)
{
    vector<int> resultArr;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(v1[i]<v2[j])
        {
            i++;
        }
        else if(v1[i]>v2[j])
        {
            j++;
        }
        else 
        {
            resultArr.push_back(v1[i]);
            i++;
            j++;
        }
    }
    return resultArr;
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
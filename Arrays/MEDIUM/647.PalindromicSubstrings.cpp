#include<bits/stdc++.h>
using namespace std;
int palindromicSubstring(string s)
{
    int n=s.size();
    int l=0,r=0,result=0;
    for(int i=0;i<n;i++)
    {
        l=i;
        r=i;
        while(l>=0 && r<n && s[l]==s[r])
        {
            result++;
            l--;
            r++;
        }
        l=i;
        r=i+1;
        while(l>=0 && r<n && s[l]==s[r])
        {
            result++;
            l--;
            r++;
        }
    }
    return result;
}
int main()
{
    string s;
    cin>>s;
    cout<<palindromicSubstring(s);
}
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int n,k1,k2,count=0,flag;
    cin>>n>>k1;
    vi s1(k1);
    For(i,k1) 
    {
        cin>>s1[i];
        if(s1[i]==n) flag=1;
    }
    cin>>k2;
    vi s2(k2);
    For(i,k2) 
    {
        cin>>s2[i];
        if(s2[i]==n) flag=2;
    }
    while(s1.size()!=0 && s2.size()!=0 && count<10000)
    {
        if(s1[0]>s2[0]) s1.push_back(s2[0]),s1.push_back(s1[0]),s1.erase(s1.begin()),s2.erase(s2.begin());
        else s2.push_back(s1[0]),s2.push_back(s2[0]),s2.erase(s2.begin()),s1.erase(s1.begin());
        count++;
    }
    if(count==10000) cout<<"-1";
    else cout<<count<<" "<<flag;
    return 0;
}
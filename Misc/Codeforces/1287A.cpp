#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,flag=0;
        cin>>n;
        set<int> te;
        string s;
        cin>>s;
        For(i,s.length())
        {
            if(s[i]=='A') flag=1;
            if(s[i]=='P' && flag==1) count++;
            else te.insert(count),count=0;
        }
        if(count!=0) te.insert(count);
        cout<<*te.rbegin()<<endl;
    }
    return 0;
}
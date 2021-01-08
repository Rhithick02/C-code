#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int c0=0,c1=0;
        string s;
        cin>>s;
        For(i,s.size()) (s[i]=='0'? c0 : c1)++;
        int d0=0,d1=0,ans=1e9;
        For(i,s.size())
        {
            (s[i]=='0'? d0 : d1)++;
            ans=min(ans,min(d1+c0-d0,d0+c1-d1));
        }
        cout<<ans<<endl;
    }
    return 0;
}
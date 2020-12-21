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
#define mod 1000000007

vi dp(1e5+1, -1);
lli fiv(int n){
    if(dp[n]!=-1) return dp[n];
    if(n<=2) return n;
    return dp[n] = (fiv(n-1)+fiv(n-2))%mod;
}

int main(){
    int count=0;
    string s;
    cin>>s;
    For(i,s.length())
        if(s[i]=='m' || s[i]=='w') 
        {
            count=-1;
            break;
        }
    if(count==-1) cout<<0<<endl;
    else
    {
        lli ans=1;
        For(i,s.length())
        {
            if(s[i]=='n')
            {
                count++;
                if(i!=s.length()-1) continue;
            }
            if(!count) continue;
            ans*=fiv(count);
            ans%=mod;
            count=0;
        }
        For(i,s.length())
        {
            if(s[i]=='u')
            {
                count++;
                if(i!=s.length()-1) continue;
            }
            if(!count) continue;
            ans*=fiv(count);
            ans%=mod;
            count=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}

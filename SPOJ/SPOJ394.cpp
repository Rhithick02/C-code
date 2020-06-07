#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

vil dp(1e5+1,-1);
lli fib(int n)
{
    if(dp[n]!=-1) return dp[n];
    if(n==2) return n;
    if(n<=1) return 1;
    return dp[n]=fib(n-1)+fib(n-2);
}

int main(){
    string s;
    cin>>s;
    while(s!="0")
    {
        lli ans=1;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='2' || s[i]=='1') count++;
            else if(s[i]<='9' && s[i]>='3')
            {
                if(s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6'))
                    ans*=fib(count+1);
                else ans*=fib(count);
                count=0;
            }
            else if(s[i]=='0')
            {
                if(i!=s.length()-1 && s[i+1]=='0') ans=0;
                else ans*=(count==0? 1:fib(count-1));
                count=0;
            }
        }
        ans*=fib(count);
        cout<<ans<<endl;
        cin>>s;
    }
    return 0;
}
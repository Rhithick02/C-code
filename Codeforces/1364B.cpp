#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
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

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,fl=0;
        cin>>n;
        vi ar(n),dp;
        For(i,0,n) cin>>ar[i];
        dp.pb(ar[0]),dp.pb(ar[1]);
        if(dp[0]>dp[1]) fl=1;
        For(i,2,n)
        {
            int size=dp.size();
            if(ar[i]>dp[size-1])
            {
                if(!fl) dp[size-1]=ar[i];
                else dp.pb(ar[i]),fl=0;
            } 
            else
            {
                if(fl) dp[size-1]=ar[i];
                else dp.pb(ar[i]),fl=1;
            }
        }
        cout<<dp.size()<<endl;
        for(auto it: dp) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}
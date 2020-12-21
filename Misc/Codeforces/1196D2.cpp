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
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=1e9;
        string s,te="RGB";
        cin>>n>>k>>s;
        For(i,0,3){
            int cur=0;
            vi dp(n);
            For(j,0,n){
                if(s[j]!=te[(i+j)%3]) dp[j]=1;
                cur+=dp[j];
                if(j>=k) cur-=dp[j-k];
                if(j>=k-1) ans=min(ans,cur);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
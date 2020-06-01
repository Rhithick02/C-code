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

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        lli n,p,k;
        cin>>n>>p>>k;
        vi ar(n);
        For(i,n) cin>>ar[i];
        sort(asc(ar));
        vi dp(n+2);
        For(i,n)
            dp[i+2]=ar[i]+dp[i];
        cout<<(upper_bound(asc(dp),p)-dp.begin())-2<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        vi ar(n+1),dp(n+1);
        for(int i=1;i<=n;i++)
            for(int j=2*i;j<=n;j+=i) if(ar[i]<ar[j]) dp[j]=max(dp[j],dp[i]+1);
        cout<<*max_element(dp.begin(),dp.end())<<endl;
    }
    return 0;
}
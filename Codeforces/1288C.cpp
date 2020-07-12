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
#define mod 1000000007

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vector<vil> ar(m,vil(n,1));
    For(i,1,n) ar[0][i]=i+1;
    For(i,1,m) For(j,1,n) ar[i][j]=(ar[i-1][j]%mod+ar[i][j-1]%mod)%mod;
    For(i,0,m){
        for(auto it:ar[i]) cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}
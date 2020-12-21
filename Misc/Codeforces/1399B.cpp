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
        lli sum=0,csma=1e9,osma=1e9;
        int n;
        cin>>n;
        vil can(n),org(n);
        For(i,0,n) cin>>can[i],csma=min(can[i],csma);
        For(i,0,n) cin>>org[i],osma=min(org[i],osma);
        For(i,0,n){
            lli te=min(can[i]-csma,org[i]-osma);
            sum+=te+max(can[i]-csma-te,org[i]-osma-te);
        }
        cout<<sum<<"\n";
    }
}
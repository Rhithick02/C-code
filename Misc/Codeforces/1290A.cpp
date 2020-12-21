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
        int n,m,k,res=0;
        cin>>n>>m>>k;
        k=min(k,m-1);
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        For(i,0,k+1){
            int temp,store=2e9;
            For(j,0,m-k){
                temp=max(ar[i+j],ar[n-m+i+j]);
                store=min(store,temp);
            }
            res=max(res,store);
        }
        cout<<res<<"\n";
    }
    return 0;
}
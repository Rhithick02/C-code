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
        int n,k,ans=2e9,res;
        cin>>n>>k;
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        if(n==1) cout<<ar[0]<<"\n";
        else{
            sort(asc(ar));
            For(i,0,n-k){
                if(ans>ar[i+k]-(ar[i]+ar[i+k])/2){
                    ans=ar[i+k]-(ar[i]+ar[i+k])/2;
                    res=(ar[i]+ar[i+k])/2;
                }
            }
            cout<<res<<"\n";
        }
    }
    return 0;
}
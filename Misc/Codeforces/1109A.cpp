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
    lli res=0;
    int n;
    cin>>n;
    map<int,int> mp[2];
    vi ar(n),pref(n+1);
    For(i,0,n) cin>>ar[i];
    For(i,1,n+1) pref[i]=ar[i-1]^pref[i-1];
    For(i,0,n+1) mp[i&1][pref[i]]++;
    For(i,0,2){
        for(auto it: mp[i]){
            if(it.se<=1) continue;
            res+=1LL*it.se*(it.se-1)/2;
        }
    }
    cout<<res<<"\n";
}
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, res = 2e6;
        cin >> n;
        map<int, vector<int>> mp;
        vector<int> ar(n);
        For(i, 0, n){
            cin >> ar[i];
            mp[ar[i]].pb(i);
        }
        for(auto it: mp){
            if(mp[it.fi].size() == 1) continue;
            For(i, 1, mp[it.fi].size())
                res = min(res, mp[it.fi][i]-mp[it.fi][i-1]);
        }
        cout << (res == 2e6 ? -1:res + 1) << "\n";
    }
}
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
        lli n, k, mini = 1e10, maxi = -1e10;
        cin >> n >> k;
        vector<lli> ar(n), st[2];
        For(i, 0, n){
            cin >> ar[i];
            mini = min(mini, ar[i]);
            maxi = max(maxi, ar[i]);
        }
        For(i, 0, n){
            st[0].pb(maxi - ar[i]);
            ar[i] = maxi - ar[i];
        }
        maxi = maxi - mini;
        For(i, 0, n){
            st[1].pb(maxi - ar[i]);
        }
        if (k & 1){
            for(auto it: st[0]) cout << it << " ";
        }
        else {
            for(auto it: st[1]) cout << it << " ";
        }
        cout << "\n";
    }
}
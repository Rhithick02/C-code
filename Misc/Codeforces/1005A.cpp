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
    int n;
    cin >> n;
    vector <int> ar(n), res;
    For(i, 0, n) {
        cin >> ar[i];
        if(i && ar[i] == 1) {
            res.pb(ar[i-1]);
        }
    }
    res.pb(ar[n-1]);
    cout << res.size() << "\n";
    for(auto it: res) cout << it << " ";
}
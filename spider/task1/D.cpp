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
    int n, r, x, y, change = 0;
    cin >> n >> r >> x >> y;
    vector <int> c(n), s(n);
    For(i, 0, n) cin >> c[i];
    For(i, 0, n) {
        cin >> s[i];
        if(!c[i]) continue;
        change += (s[i] == 1 ? x:-y);
    }
    if(change > 0) cout << "promoted\n";
    else if(change < 0) cout << "demoted\n";
    else cout << "no change\n";
}
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
    int n, prev = 0, fl = 0;
    cin >> n;
    vector <pair<int, int>> ar(n);
    For(i, 0, n) {
        cin >> ar[i].fi >> ar[i].se;
        if(ar[i].fi > ar[i].se)
            swap(ar[i].fi, ar[i].se);
    }
    prev = ar[0].se;
    For(i, 1, n) {
        if(ar[i].se <= prev)
            prev = ar[i].se;
        else if(ar[i].fi <= prev)
            prev = ar[i].fi;
        else {
            fl = 1;
            break;
        }
    }
    if(fl) cout << "NO\n";
    else cout << "YES\n";
}
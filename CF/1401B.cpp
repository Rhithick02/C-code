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
    while(t--) {
        lli x[2], y[2], z[2], tot = 0, te;
        cin >> x[0] >> y[0] >> z[0];
        cin >> x[1] >> y[1] >> z[1];
        te = min(z[0], y[1]);
        tot += 1LL * 2 * te;
        z[0] -= te, y[1] -= te;
        te = min(z[0], z[1]);
        z[0] -= te, z[1] -= te;
        te = min(z[0], x[1]);
        z[0] -= te, x[1] -= te;
        te = min(y[0], x[1]);
        y[0] -= te, x[1] -= te;
        te = min(y[0], y[1]);
        y[0] -= te, y[1] -= te;
        te = min(x[0], z[1]);
        x[0] -= te, z[1] -= te;
        te = min(x[0], x[1]);
        x[0] -= te, x[1] -= te;
        te = min(x[0], y[1]);
        x[0] -= te, y[1] -= te;
        tot -= 1LL * 2 * min(y[0], z[1]);
        cout << tot << "\n";
    }
}
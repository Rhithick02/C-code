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
    lli sum = 0;
    int n, m, x, y, cnt = 0;
    bool ok = false;
    cin >> n >> m;
    vector <lli> dif(n);
    For(i, 0, n) {
        cin >> x >> y;
        sum += x;
        dif[i] = x - y;
    }
    if(sum <= m) {
        cout << "0\n";
        exit(0);
    }
    sort(des(dif));
    For(i, 1, n) dif[i] += dif[i-1];
    For(i, 0, n) {
        if(dif[i] >= sum - m) {
            cout << i + 1 << "\n";
            ok = true;
            break;
        }
    }
    if(!ok) cout << "-1\n";
}
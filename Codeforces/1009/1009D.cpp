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
    int n, m, cnt = 0;
    cin >> n >> m;
    vector <pair<int, int>> res;
    if(m < n - 1) goto a;
    For(i, 1, n + 1) {
        For(j, i + 1, n + 1) {
            if(__gcd(i, j) != 1)
                continue;
            if(cnt == m)
                break;
            res.pb({i, j});
            cnt++;
        }
    }
    a:
    if(cnt != m || m < n - 1) cout << "Impossible\n";
    else {
        cout << "Possible\n";
        for(auto it: res) 
            cout << it.fi << " " << it.se << "\n";
    }
}
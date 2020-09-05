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
    int n, h, ans = 1e8;
    cin >> n >> h;
    vector <int> res;
    string s;
    cin >> s;
    For(i, 0, n) if(s[i] == '0') res.pb(i + 1);
    For(i, 0, res.size() - h) {
        int pos = upper_bound(asc(res), res[i + h] + res[i] >> 1) - res.begin();
        ans = min(ans, min(res[pos] - res[i], res[i + h] - res[pos - 1]));
    }
    cout << ans << endl;
}
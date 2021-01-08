#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(lli i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
lli power(lli x, lli y) {
    lli prod = 1;
    while(y) {
        if(y & 1)
            prod = (prod * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return prod;
}

int main(){
    ios::sync_with_stdio(false);
    lli te = 0, res = 0;
    string s;
    vector <lli> st(MAX);
    For(i, 0, MAX) {
        te = (i + 1) * power(10, i) + te;
        te %= mod;
        st[i+3] = te;
    }
    cin >> s;
    lli n = s.length();
    For(i, 0, n) {
        lli te = i * (i + 1) >> 1;
        te %= mod;
        res = (res + 1LL * te * (s[i] - '0') * power(10, n - i - 1)) % mod;
        res = (res + 1LL * (s[i] - '0') * st[n-i+1]) % mod;
    }
    cout << res << "\n";
}
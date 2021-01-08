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
    lli n, k, s;
    int fl = 0;
    vector <lli> res;
    cin >> n >> k >> s;
    if(k * (n - 1) < s || k > s) {
        cout << "NO\n";
        exit(0);
    }
    lli steps = s / k, rem = s % k;
    For(i, 0, k) {
        if(!fl) res.pb(steps + 1);
        else res.pb(1);
        fl ^= 1;
    }
    For(i, 0, s % k - 1) {
        if(res[i] != 1 && rem > 1) res[i]++;
        if(rem) rem--;
    }
    if((s % k) & 1) {
        res[k - 1]++;
        if(res[k - 1] == 2) res[k - 2]++;
    }
    cout << "YES\n";
    for(auto it: res) cout << it << " ";
}
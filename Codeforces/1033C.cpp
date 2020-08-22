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
    vector <int> st[n + 1], ar(n), res(n + 1);
    For(i, 0, n) cin >> ar[i];
    For(i, 0, n) {
        for(int j = i - ar[i]; j >=0; j -= ar[i])
            if(ar[j] > ar[i]) st[ar[i]].pb(ar[j]);
        for(int j = i + ar[i]; j < n; j += ar[i])
            if(ar[j] > ar[i]) st[ar[i]].pb(ar[j]);
    }
    For(i, 0, n) {
        int fl = -1;
        for(auto it: st[n-i]) if(res[it] == -1) fl = 1;
        res[n-i] = fl;
    }
    For(i, 0, n) cout << (res[ar[i]] == 1 ? "A":"B");
    cout << endl;
}
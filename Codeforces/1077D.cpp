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
#define MAX 200001
int n, k, x;
vector <int> res, ar, st(MAX);
int bs(int val) {
    res.clear();
    For(i, 0, MAX) {
        int te = min(st[i] / val, k - (int)res.size());
        For(j, 0, te) res.pb(i);
    }
    return res.size() == k;
}
int main(){
    ios::sync_with_stdio(false);
    cin >> n >> k;
    For(i, 0, n) {
        cin >> x;
        ar.pb(x), st[x]++;
    }
    int low = 1, high = n, mid;
    while(high - low > 1) {
        mid  = low + high >> 1;
        if(bs(mid)) low = mid;
        else high = mid;
    }
    if(!bs(high)) bs(low);
    for(auto it: res) cout << it << " ";
}
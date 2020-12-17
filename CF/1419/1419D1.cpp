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
    int n, k = 0, cnt = 0;
    cin >> n;
    vector <int> ar(n), st(n);
    For(i, 0, n) cin >> ar[i];
    sort(asc(ar));
    for(int i = 1; i < n; i += 2) {
        st[i] = ar[k++];
    }
    for(int i = 0; i < n; i += 2) {
        st[i] = ar[k++];
    }
    For(i, 1, n - 1) {
        if(st[i] < st[i-1] && st[i] < st[i+1]) cnt++;
    }
    cout << cnt << "\n";
    for(auto it: st) cout << it << " ";
}
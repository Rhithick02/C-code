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
    vector <int> c(n), a(m);
    For(i, 0, n) cin >> c[i];
    For(i, 0, m) cin >> a[i];
    for(int i = 0, j = 0; i < n && j < m ; i++) {
        if(c[i] <= a[j]) {
            cnt++;
            j++;
        }
    }
    cout << cnt << "\n";
}
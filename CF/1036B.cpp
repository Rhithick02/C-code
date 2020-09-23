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
    int q;
    lli n, m, k;
    cin >> q;
    For(i, 0, q) {
        cin >> n >> m >> k;
        if(n < m) swap(n, m);
        cout << (k < n ? -1:((n - m) % 2 ? k - 1:((k - m) % 2 ? k - 2:k))) << "\n";
    }
}
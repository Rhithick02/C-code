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
    int n, m, x, res = 0;
    vector <int> a(n), b(m), prea(n+1), preb(m+1);
    For(i , 0, n) {
        cin >> a[i];
        prea[i+1] = prea[i] + a[i];
    }
    For(i , 0, m) {
        cin >> b[i];
        preb[i+1] = preb[i] + b[i];
    }
    For(i, 1, n+1) {
        For(j, 1, m+1) {
            
        }
    }
    cin >> x;

}
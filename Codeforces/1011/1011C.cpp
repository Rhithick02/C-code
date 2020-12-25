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
    int n, m, fl = 0;
    cin >> n >> m;
    double res = m;
    vector <int> a(n), b(n);
    For(i, 0, n) {
        cin >> a[i];
        if(a[i] == 1) fl = 1;
    }
    For(i, 0, n) {
        cin >> b[i];
        if(b[i] == 1) fl = 1;
    }
    if(fl) {
        cout << "-1\n";
        exit(0);
    }
    For(i, 0, n) {
        res *= 1.0 * a[i] / (a[i] - 1);
        res *= 1.0 * b[i] / (b[i] - 1);
    }
    cout << std :: fixed << setprecision(6) << res - m << "\n";
}
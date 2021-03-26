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
    int t, tr;
    cin >> t;
    tr = t;
    while(t--) {
        int n, a, b, c, cnt = 1;
        cin >> n >> a >> b >> c;
        if(a + b - c > n || (n > 1 && (a == (b == c)))){
            cout << "Case #" << tr - t << ": IMPOSSIBLE" << "\n";
            continue;
        }
        vector <int> ar(n);
        if(c > 1) {
            For(i, 0, a - c) ar[i] = 1;
            For(i, 0, b - c) ar[n - 1 - i] = 1;
            For(i, 0, c - 1) ar[i + a - c] = 2;
            ar[n - 1 - b + c] = 2;
            For(i, 0, n) if(!ar[i]) ar[i] = 1;
        }
        else {
            For(i, 0, b - 1) ar[n-1-i] = n - 1;
            For(i, 0, a - 1) ar[i] = n - 1;
            if(b < a) {
                For(i, a - 1, n - b) ar[i] = 1;
                ar[n-b] = n;
            }
            else {
                For(i, a, n - b + 1) ar[i] = 1;
                ar[a-1] = n;
            }
        }
        cout << "Case #" << tr - t << ": ";
        for(auto it: ar) cout << it << " ";
        cout << "\n";
    }
}
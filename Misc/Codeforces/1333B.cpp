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
    int t;
    cin >> t;
    while(t--) {
        int n;
        bool ok = true;
        cin >> n;
        vector <int> a(n), b(n), st(3);
        For(i, 0, n) {
            cin >> a[i];
            st[a[i] + 1]++;
        }
        For(i, 0, n) cin >> b[i];
        for(int i = n - 1; i >= 0; i--) {
            st[a[i] + 1]--;
            if((a[i] < b[i] && st[2]) || (a[i] > b[i] && st[0]) || a[i] == b[i])
                continue;
            ok = false;
            break;
        }
        cout << (ok ? "YES": "NO") << "\n";
    }
}
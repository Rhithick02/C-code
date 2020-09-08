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
        pair <int, int> maxi = {0, 0};
        cin >> n;
        vector <int> a(n), b, te;
        For(i, 0, n) {
            cin >> a[i];
            maxi = max(maxi, {a[i], i});
        }
        For(j, 0, n) {
            te.pb(maxi.fi);
            b.pb(a[maxi.se]), a[maxi.se] = -1;
            maxi = {0, 0};
            For(i, 0, n) {
                if(a[i] == -1) continue;
                maxi = max(maxi, {__gcd(te.back(), a[i]), i});
            }
        }
        for(auto it: b) cout << it << " ";
        cout << "\n";
    }
}
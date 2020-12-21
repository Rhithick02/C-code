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
        lli res = 0;
        int n, x;
        cin >> n;
        vector <int> cnt(40);
        For(i, 0, n) {
            int tr = 0;
            cin >> x;
            while(x) {
                tr++;
                x = x >> 1;
            }
            cnt[tr]++;
        }
        For(i, 0, 40) {
            res += (1LL * cnt[i] * (cnt[i] - 1))/ 2;
        }
        cout << res << "\n";
    }
}
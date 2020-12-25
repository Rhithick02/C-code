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
lli res = -1e18, ans = 1;
deque <int> te;
void fuct(int l, int n) {
    For(i, 0, l) ans *= te[i];
    For(i, 0, 5 - l) ans *= te[n-1-i];
    res = max(res, ans);
    ans = 1;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        res = -1e18, ans = 1;
        te.clear();
        int n;
        cin >> n;
        deque <lli> ar(n);
        For(i, 0, n) cin >> ar[i];
        sort(asc(ar));
        For(i, 0, 5) {
            te.pb(ar.front());
            ar.pop_front();
        }
        n = ar.size();
        For(i, 0, min(n, 5)) {
            te.pb(ar.back());
            ar.pop_back();
        }
        n = te.size();
        sort(asc(te));
        fuct(0, n);
        fuct(4, n);
        fuct(2, n);
        cout << res << "\n";
    }
}
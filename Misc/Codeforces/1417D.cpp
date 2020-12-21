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
        int n, sum = 0;
        cin >> n;
        vector <pair<pair<int, int>, int>> st;
        vector <int> ar(n);
        For(i, 0, n) {
            cin >> ar[i];
            sum += ar[i];
        }
        if(sum % n) {
            cout << -1 << "\n";
            continue;
        }
        For(i, 1, n) {
            // if(ar[i] <= sum / n) continue;
            int x = ar[i] / (i + 1);
            st.pb({{i + 1, 1}, x});
            ar[i] -= (i + 1) * x;
            ar[0] += (i + 1) * x;
        }
        For(i, 1, n) {
            int x = sum / n - ar[i];
            st.pb({{1, i + 1}, x});
            ar[0] -= x;
        }
        cout << st.size() << "\n";
        For(i, 0, st.size()) {
            cout << st[i].fi.fi << " " << st[i].fi.se << " " << st[i].se;
            cout << "\n";
        }
    }
}
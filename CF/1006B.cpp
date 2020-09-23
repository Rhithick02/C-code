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
    int n, k, sum = 0;
    cin >> n >> k;
    vector <int> res;
    vector <pair<int, int>> ar(n);
    For(i, 0, n) {
        cin >> ar[i].fi;
        ar[i].se = i + 1;
    }
    sort(des(ar));
    For(i, 0, k) {
        sum += ar[i].fi;
        res.pb(ar[i].se);
    }
    sort(asc(res));
    cout << sum << "\n";
    res[k-1] = n;
    cout << res[0] << " ";
    For(i, 1, k)
        cout << res[i] - res[i-1] << " ";
}
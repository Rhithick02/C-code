#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    lli sum = 0, ans = 0;
    int n, a, b, cnt = 0;
    cin >> n >> a >> b;
    vector <lli> ar(n), pref(n+1);
    For(i, 0, n) cin >> ar[i];
    For(i, 1, n+1) {
        pref[i] = pref[i-1] + ar[i-1];
    }
    lli maxi = -2e18;
    multiset <lli> te;
    For(i, a, n+1) {
        if(i > b) {
            te.erase(te.find(pref[i-b-1]));
        }
        te.insert(pref[i-a]);
        maxi = max(maxi, pref[i] - *te.begin());
    }
    cout << maxi << endl;
}
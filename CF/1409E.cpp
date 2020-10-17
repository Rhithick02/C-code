// WRONG METHOD

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
#define MAX 200001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int n, k, maxi, mark, res, cur, nxt;

int do_function(vector <int> x) {
    while(cur < n) {
        if(nxt - cur >= maxi) {
            maxi = nxt - cur;
            mark = cur;
        }
        cur++;
        while(cur < n && x[cur] == x[cur-1]) cur++;
        nxt = upper_bound(asc(x), x[cur] + k) - x.begin();
    }
    return maxi;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector <int> x(n), y(n);
        For(i, 0, n) cin >> x[i];
        For(i, 0, n) cin >> y[i];
        sort(asc(x));
        cur = 0, maxi = 0, res = 0;
        nxt = upper_bound(asc(x), x[cur] + k) - x.begin();
        res += do_function(x);
        For(i, mark, mark + maxi) x[i] = 0;
        sort(asc(x));
        cur = 0, maxi = 0;
        while(cur < n && !x[cur]) cur++;
        nxt = upper_bound(asc(x), x[cur] + k) - x.begin();
        res += do_function(x);
        cout << res << "\n";
    }
}
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
    int t;
    cin >> t;
    while(t--) {
        string s;
        int n, cost[2], h, cnt[2] = {0}, res = 0;
        cin >> n >> cost[0] >> cost[1] >> h >> s;
        For(i, 0, n) cnt[s[i]-'0']++;
        if(cost[1] + h <= cost[0]) {
            res += cnt[0] * (cost[1] + h) + cnt[1] * cost[1];
        } else if (cost[0] + h <= cost[1]) {
            res += cnt[1] * (cost[0] + h) + cnt[0] * cost[0];
        } else {
            res += cnt[0] * cost[0] + cnt[1] * cost[1];
        }
        cout << res << "\n";
    }
}
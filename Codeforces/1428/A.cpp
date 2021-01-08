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
        int x[2], y[2], cnt = 0, res = 0;
        cin >> x[0] >> y[0] >> x[1] >> y[1];
        if(x[0] - x[1]) {
            res += abs(x[0] - x[1]);
            cnt++;
        }
        if(y[0] - y[1]) {
            res += abs(y[0] - y[1]);
            if(cnt) res += 2;
        }
        cout << res << "\n";
    }
}
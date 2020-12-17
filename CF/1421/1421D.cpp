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
        lli x, y, c[6] = {0}, val = 0, cur_x = 0, cur_y = 0, temp = 0;
        cin >> x >> y;
        For(i, 0, 6) cin >> c[i];
        if(cur_x < x) temp += (x - cur_x) * c[5];
        if(cur_x > x) temp += (cur_x - x) * c[2];
        if(cur_y < y) temp += (y - cur_y) * c[1];
        if(cur_y > y) temp += (cur_y - y) * c[4];

        if(cur_x < x) {
            val += (x - cur_x) * c[0];
            if(y - x < 0) val += (x - y) * c[4];
            else val += (y - x) * c[1];
        } else {
            val += (cur_x - x) * c[3];
            if(y - x < 0) val += (x - y) * c[4];
            else val += (y - x) * c[1];
        }
        val = min(val, temp), temp = 0;
        if(cur_y < y) {
            temp += (y - cur_y) * c[0];
            if(y - x < 0) temp += (x - y) * c[5];
            else temp += (y - x) * c[2];
        } else {
            temp += (cur_y - y) * c[3];
            if(y - x < 0) temp += (x - y) * c[5];
            else temp += (y - x) * c[2];
        }
        cout << min(val, temp) << "\n";
    }
}
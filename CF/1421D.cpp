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
        lli x, y, cost[6] = {0}, val = 0, cur_x = 0, cur_y = 0;
        cin >> x >> y;
        For(i, 0, 6) cin >> cost[i];
        int right = min(cost[1], cost[0]+cost[2]);
        int left = min(cost[4], cost[3]+cost[5]);
        int top_right = min(cost[0], cost[5]+cost[1]);
        int top = min(cost[5], cost[0]+cost[4]);
        int bot_left = min(cost[3], cost[4]+cost[2]);
        int bot = min(cost[2], cost[1]+cost[3]);
        if(x != cur_x && y != cur_y) {
            
        }
    }
}
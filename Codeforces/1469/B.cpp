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
        lli temp = 0;
        lli n, m, start[2] = {0, 0};
        cin >> n;
        vector <lli> r(n);
        For(i, 0, n) {
            cin >> r[i];
            temp += r[i];
            start[0] = max(start[0], temp);
        }
        temp = 0;
        cin >> m;
        vector <lli> b(m);
        For(i, 0, m) {
            cin >> b[i];
            temp += b[i];
            start[1] = max(start[1], temp);
        }
        cout << start[0] + start[1] << "\n";
    }
}
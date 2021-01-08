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

lli power(lli x, lli y) {
    lli res = 1;
    while(y > 0) {
        if(y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli a, b, val = 0, cnt = 0;
        cin >> a >> b;
        lli tea = a, teb = b;
        while(a && b) {
            if((a & 1) && (b & 1)) {
                val += power(2, cnt);
            }
            a = a >> 1;
            b = b >> 1;
            cnt++;
        }
        cout << (tea ^ val) + (teb ^ val) << "\n";
    }
}
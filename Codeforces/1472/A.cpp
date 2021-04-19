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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

lli power(lli x, lli y) {
    lli val = 1;
    while(y) {
        if(y & 1) {
            val = (val * x) % mod; 
        }
        x = (x * x) % mod;
        y = y >> 1;
    }
    return val;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int w, h, n, cnt = 0;
        cin >> w >> h >> n;
        while(w % 2 == 0) {
            cnt++;
            w /= 2;
        }
        while(h % 2 == 0) {
            cnt++;
            h /= 2;
        }
        cout << (power(2, cnt) >= n ? "YES" : "NO") << "\n";
    }
}
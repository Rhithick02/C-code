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

int main() {
    ios::sync_with_stdio(false);
    int y, b, r;
    cin >> y >> b >> r;
    if(r <= y && r <= b) {
        cout << 3 * r - 3;
    } else if(b <= y && b <= r) {
        if(b == r) {
            b--;
        }
        cout << 3 * b;
    } else {
        if(y == b) {
            y--;
        }
        if(r - y <= 1) {
            y--;
        }
        cout << 3 * y + 3;
    }
    cout << endl;
}
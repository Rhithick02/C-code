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

int ask(int x, int y) {
    int te;
    cout << "? " << x << " " << y << endl;
    cin >> te;
    return te;
}
int main() {
    ios::sync_with_stdio(false);
    bool ok = false;
    int n, low, high, x, mid, ans;
    cin >> n;
    low = 1, high = n;
    while(high - low != 1) {
        mid = low + high >> 1;
        x = ask(low, high);
        if(x <= mid) {
            if(ask(low, mid) == x) {
                high = mid;
            } else {
                low = mid;
            }
        } else {
            if(ask(mid, high) == x) {
                low = mid;
            } else {
                high = mid;
            }
        }
    }
    if(ask(low, high) == low) {
        cout << "! " << high << endl;
    } else {
        cout << "! " << low << endl;
    }
}
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        lli x, n;
        cin >> x >> n;
        int rem = n % 4;
        if(x & 1) {
            if(rem == 0) {
                cout << x;
            } else if(rem == 1) {
                cout << x + n;
            } else if(rem == 2) {
                cout << x - 1;
            } else {
                cout << x - n - 1;
            }
        } else {
            if(rem == 0) {
                cout << x;
            } else if(rem == 1) {
                cout << x - n;
            } else if(rem == 2) {
                cout << x + 1;
            } else {
                cout << x + n + 1;
            }
        }
        cout << endl;
    }
}
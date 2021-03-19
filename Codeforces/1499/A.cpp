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
    int t;
    cin >> t;
    while(t--) {
        int n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >> b;
        int mini = min(k1, k2);
        int maxi = max(k1, k2);
        if((mini + (maxi - mini) / 2 >= w) && (n - maxi + (maxi - mini) / 2 >= b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
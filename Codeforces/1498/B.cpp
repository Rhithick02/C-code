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
        int n, w, sum = 0, cnt = 1, x;
        cin >> n >> w;
        multiset <int> te;
        For(i, 0, n) {
            cin >> x;
            te.insert(-x);
        }
        while(!te.empty()) {
            auto it = te.lower_bound(sum - w);
            if(it != te.end()) {
                sum -= *it;
                te.erase(it);
            } else {
                cnt++;
                sum = 0;
            }
        }
        cout << cnt << "\n";
    }
}
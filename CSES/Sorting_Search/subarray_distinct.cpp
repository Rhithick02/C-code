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
    lli ans = 0;
    int n, k, l, r;
    l = r = 0;
    cin >> n >> k;
    vector <int> ar(n);
    set <int> te;
    map <int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
        if(te.size() <= k) {
            mp[ar[i]]++;
            te.insert(ar[i]);
        }
        if(te.size() > k) {
            ans += 1ll * (i-l) * (i-l+1) / 2;
            ans -= 1ll * (r-l+1) * (r-l) / 2;
            while(te.size() > k) {
                mp[ar[l]]--;
                if(!mp[ar[l]]) {
                    te.erase(ar[l]);
                }
                l++;
            }
            r = i;
        }
    }
    ans += 1ll*(n-l) * (n-l+1) / 2;
    ans -= 1ll*(r-l+1) * (r-l) / 2;
    cout << ans << endl;
}
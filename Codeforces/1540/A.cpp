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

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <long long> ar(n), pref(n+1);
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        sort(asc(ar));
        for(int i = 0; i < n; i++) {
            pref[i+1] = pref[i] + ar[i];
        }
        long long ans = 0;
        for(int i = 2; i < n; i++) {
            ans -= (1ll * (i-1) * ar[i] - pref[i-1]);
        }
        cout << ans << endl;
    }
}
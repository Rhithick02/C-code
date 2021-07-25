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
        int n, cnt = 0;
        cin >> n;
        vector <pair<lli, int>> ar(n);
        for(int i = 0; i < n; i++) {
            cin >> ar[i].fi;
            ar[i].se = i+1;
        }
        sort(ar.begin(), ar.end());
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(ar[i].fi * ar[j].fi > 1ll * (2 * n - 1))
                    break;
                if(ar[i].fi * ar[j].fi == ar[i].se + ar[j].se) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}
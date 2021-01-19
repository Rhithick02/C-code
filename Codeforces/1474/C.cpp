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

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, sum = 0;
        cin >> n;
        vector <int> ar(2 * n);
        For(i, 0, 2 * n) cin >> ar[i];
        sort(des(ar));
        For(i, 1, 2 * n) {
            multiset <int> temp;
            vector <pair<int, int>> ans;
            For(j, 0, 2 * n) temp.insert(ar[j]);
            sum = ar[0] + ar[i];
            bool ok = true;
            int cnt = 0;
            while(cnt < n) {
                auto it = prev(temp.end());
                int num1 = *it;
                temp.erase(it);
                auto ti = temp.lower_bound(sum - *it);
                if(ti == temp.end()) {
                    ok = false;
                    break;
                }
                int num2 = *ti;
                temp.erase(ti);
                if(num1 + num2 != sum) {
                    ok = false;
                    break;
                }
                sum = num1;
                ans.pb({num1, num2});
                cnt++;
            }
            if(!ok) {
                if(i == 2*n - 1) cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            cout << ans[0].fi + ans[0].se << "\n";
            for(auto it: ans) cout << it.fi << " " << it.se << "\n";
            break;
        }
    }
}
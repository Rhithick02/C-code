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

bool can(vector <pair <int, int>>& ar, int mid, int n, int k) {
    vector <int> col[k+1];
    int tr = 1;
    for(int i = 0; i < n; i++) {
        if((col[tr].size() == mid) || (col[tr].size() && col[tr].back() == ar[i].fi)) {
            col[0].push_back(ar[i].fi);
            continue;
        }
        col[tr].push_back(ar[i].fi);
        tr = tr % k + 1;
    }
    for(int i = 1; i <= k; i++) {
        if(col[i].size() != mid) {
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, ans = 0;
        cin >> n >> k;
        vector <pair <int, int>> ar(n);
        vector <int> res(n);
        for(int i = 0; i < n; i++) {
            cin >> ar[i].fi;
            ar[i].se = i;
        }
        sort(asc(ar));
        int low = 0, high = n, mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(can(ar, mid, n, k)) {
                low = mid + 1;
                ans = max(ans, mid);
            } else {
                high = mid - 1;
            }
        }
        vector <int> col[k+1];
        int tr = 1;
        for(int i = 0; i < n; i++) {
            if((col[tr].size() == ans) || (col[tr].size() && col[tr].back() == ar[i].fi)) {
                col[0].push_back(ar[i].fi);
                res[ar[i].se] = 0;
                continue;
            }
            col[tr].push_back(ar[i].fi);
            res[ar[i].se] = tr;
            tr = tr % k + 1;
        }
        for(auto it: res) cout << it << " ";
        cout << endl;
    }
}
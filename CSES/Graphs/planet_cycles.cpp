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

vector <int> child, ans, col;

void cycle(int s, vector <int>& ar) {
    if (col[s] == 1) {
        vector <int> temp(1, s);
        int n = ar.size();
        for(int i = n-1; ar[i] != s; i--) {
            temp.pb(ar[i]);
        }
        int si = temp.size();
        for(auto it: temp) {
            ans[it] = si;
        }
        for(int i = n-si-1; i >= 0; i--) {
            ans[ar[i]] = n - i;
        }
    } else if (col[s] == 0) {
        col[s] = 1;
        ar.pb(s);
        cycle(child[s], ar);
        ar.pop_back();
        col[s] = 2;
    } else {
        int n = ar.size();
        for (int i = n-1; i >= 0; i--) {
            ans[ar[i]] = ans[s] + n - i;
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    child.resize(n+1), ans.resize(n+1), col.resize(n+1);
    for (int i = 1, u; i <= n; i++) {
        cin >> u;
        child[i] = u;
        if (child[i] == i) {
            ans[i] = 1;
        }
    }
    vector <int> ar;
    for (int i = 1; i <= n; i++) {
        if (col[i]) continue;
        cycle(i, ar);
    }
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
}
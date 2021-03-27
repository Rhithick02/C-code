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

int find_min(vector <int> ar, int l) {
    return min_element(ar.begin() + l, ar.end()) - ar.begin();
}

int cost_find(vector <int> ar, int n) {;
    int cost = 0;
    For(i, 0, n-1) {
        int to_index = find_min(ar, i) + 1;
        reverse(ar.begin() + i, ar.begin() + to_index);
        cost += to_index - i;
    }
    return cost;
}
int main() {
    ios::sync_with_stdio(false);
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        bool ok = false;
        int n, c;
        cin >> n >> c;
        vector <int> ans(n);
        iota(asc(ans), 1);
        do {
            if(c == cost_find(ans, n)) {
                ok = true;
                break;
            }
        } while(next_permutation(asc(ans)));
        cout << "Case #" << T - t << ": ";
        if(ok) for(auto it: ans) cout << it << " ";
        else cout << "IMPOSSIBLE";
        cout << "\n";
    }
}
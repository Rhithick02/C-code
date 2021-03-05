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

int solve(vector <int> &a, vector <int> &b) {
    int n = a.size(), m = b.size();
    vector <int> match;
    For(i, 0, n) {
        auto it = lower_bound(asc(b), a[i]);
        if(it == b.end()) continue;
        if(*it == a[i])
            match.pb(a[i]);
    }
    int cnt = match.size();
    For(i, 0, m) {
        int te = upper_bound(asc(a), b[i]) - a.begin();
        int be = b[i] - te + 1;
        int spe = i - (lower_bound(asc(b), be) - b.begin() - 1);
        int rem = match.end() - upper_bound(asc(match), b[i]);
        cnt = max(cnt, rem + spe);
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, m, cnt_pos = 0, cnt_neg = 0, x;
        cin >> n >> m;
        vector <int> pos_a, neg_a, pos_b, neg_b;
        For(i, 0, n) {
            cin >> x;
            (x < 0 ? neg_a.pb(-x) : pos_a.pb(x));
        }
        For(i, 0, m) {
            cin >> x;
            (x < 0 ? neg_b.pb(-x) : pos_b.pb(x));
        }
        sort(asc(neg_a)), sort(asc(neg_b));
        if(pos_a.size() && pos_b.size())
            cnt_pos = solve(pos_a, pos_b);
        if(neg_a.size() && neg_b.size())
            cnt_neg = solve(neg_a, neg_b);
        cout << cnt_pos + cnt_neg << endl;
    }
}
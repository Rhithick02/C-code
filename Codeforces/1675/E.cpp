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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k, cnt, i = 0;
        char _max, _min, t1, t2;
        string s;
        cin >> n >> k >> s;
        while (s[i] == 'a') {
            i++;
        }
        cnt = s[i] - 'a';
        _min = t1 = s[i] - min(cnt, k);
        _max = t2 = s[i];
        i++;
        while (i < n && cnt < k) {
            if (s[i] > _max) {
                if (cnt + (s[i] - _max) > k) {
                    t2 = s[i];
                    t1 = s[i] - (k - cnt);
                    cnt += k - cnt;
                } else {
                    cnt += (s[i] - _max);
                    _max = s[i];
                }
            }
            i++;
        }
        for (int l = 0; l < n; l++) {
            if (s[l] <= _max) {
                s[l] = min(s[l], _min);
            } else if (s[l] <= t2) {
                s[l] = min(s[l], t1);
            }
        }
        cout << s << "\n";
    }
}
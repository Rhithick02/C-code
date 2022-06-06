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

lli power(lli x, lli y) {
    lli res = 1;
    while (y) {
        if (y&1) {
            res *= x;
        }
        y = y >> 1;
        x = x * x;
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <lli> fact(1, 6), two_pow;
    for (int i = 4; ; i++) {
        lli temp = fact.back() * i;
        if (temp > 1e12) {
            break;
        }
        fact.push_back(temp);
    }
    for (int i = 0; ; i++) {
        lli temp = power(2, i);
        if (temp > 1e12) {
            break;
        }
        two_pow.push_back(temp);
    }
    int t;
    cin >> t;
    while (t--) {
        lli n;
        int res = MAX;
        cin >> n;
        for (int i = 0; i < (1 << (int)fact.size()); i++) {
            int temp = i, cnt = 0, val = 0;
            lli tot = 0;
            while (temp) {
                if (temp & 1) {
                    tot += fact[cnt];
                    val++;
                }
                cnt++;
                temp /= 2;
                if (tot > n) break;
            }
            if (tot > n) continue;
            res = min(res, val + __builtin_popcountll(n-tot));
        }
        cout << res << endl;
    }
}
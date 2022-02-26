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
        int n, cnt = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++) {
            cnt += (s[i] == '0' ? 1 : 0);
        }
        if (cnt%2 == 0 || cnt == 1) {
            cout << "BOB\n";
        } else {
            cout << "ALICE\n";
        }
    }
}
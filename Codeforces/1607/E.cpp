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
    while(t--) {
        int n, m, hori = 0, veri = 0;
        string s;
        cin >> n >> m >> s;
        vector <int> hor, ver;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'L') {
                hori--;
            } else if(s[i] == 'R') {
                hori++;
            } else if(s[i] == 'U') {
                veri--;
            } else {
                veri++;
            }
            if(s[i] == 'R' || s[i] == 'L') {
                hor.pb(hori);
            } else {
                ver.pb(veri);
            }
        }
        int x_min = 0, x_max = 0, prev_min = 0, prev_max = 0;
        for(auto it: hor) {
            x_min = min(x_min, it);
            x_max = max(x_max, it);
            if(abs(it) >= m || x_max - x_min >= m) {
                break;
            }
            prev_min = x_min;
            prev_max = x_max;
        }
        int y_min = 0, y_max = 0, prevy_min = 0, prevy_max = 0;
        for(auto it: ver) {
            y_min = min(y_min, it);
            y_max = max(y_max, it);
            if(abs(it) >= n || y_max - y_min >= n) {
                break;
            }
            prevy_min = y_min;
            prevy_max = y_max;
        }
        pair <int, int> cor = {1, 1};
        cor.se -= prev_min;
        cor.fi -= prevy_min;
        cout << cor.fi << " " << cor.se << endl;
    }
}
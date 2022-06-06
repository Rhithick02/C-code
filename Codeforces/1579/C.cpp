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
        int n, m, k, tot = 0, ans = 0;
        cin >> n >> m >> k;
        vector <string> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            for (auto it : ar[i]) {
                if (it == '*') {
                    tot++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ar[i][j] == '.') {
                    continue;
                }
                int cnt = 0;
                for (int x=i-1, y=j-1, z=j+1; x >= 0 && y >= 0 && z < m; x--,y--,z++) {
                    if (ar[x][y] == '.' || ar[x][z] == '.') {
                        break;
                    }
                    cnt++;
                }
                if (cnt < k) {
                    continue;
                }
                // cout << i << " " << j << "\n";
                if (ar[i][j] == '*') {
                    ans++;
                    ar[i][j] = '#';
                }
                for (int x=i-1, y=j-1, z=j+1; x >= 0 && y >= 0 && z < m; x--,y--,z++) {
                    if (ar[x][y] == '.' || ar[x][z] == '.') {
                        break;
                    }
                    if (ar[x][y] == '*') {
                        ans++;
                        ar[x][y] = '#';
                    } 
                    if (ar[x][z] == '*') {
                        ans++;
                        ar[x][z] = '#';
                    }
                }
            }
        }
        cout << (ans == tot ? "YES" : "NO") << "\n";
    }
}
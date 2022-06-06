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
        int n, res = MAX;
        cin >> n;
        vector <double> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        // cout << "here" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                double d = (i == j ? 0 : 1.0 * (ar[j]-ar[i]) / (j-i));
                vector <double> temp(n);
                int k = i, cnt = 0;
                while (k >= 0) {
                    temp[k] = ar[i] - 1.0 * (i-k) * d;
                    k--;
                }
                k = j;
                while (k > i) {
                    temp[k] = ar[j] - 1.0 * (j-k) * d;
                    k--;
                }
                k = j+1;
                while (k < n) {
                    temp[k] = ar[j] + 1.0 * (k-j) * d;
                    k++;
                }
                for (int l = 0; l < n; l++) {
                    if (temp[l] != ar[l]) {
                        cnt++;
                    }
                }
                // cout << i << " " << j << " " << cnt << "\n";
                // if (!i && j == 1) {
                //     for (auto it : temp) {
                //         cout << it << " ";
                //     }
                // }
                res = min(res, cnt);
            }
        }
        cout << (res == MAX ? 0 : res) << "\n";
    }
}
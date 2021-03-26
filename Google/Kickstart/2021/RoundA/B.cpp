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

int main() {
    ios::sync_with_stdio(false);
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        int r, c, x;
        cin >> r >> c;
        vector <int> ar[r];
        For(i, 0, r) {
            For(j, 0, c) {
                cin >> x;
                ar[i].pb(x);
            }
        }
        x = 0;
        For(i, 0, r) {
            For(j, 0, c) {
                if(!ar[i][j]) continue;
                int cnt[4] = {0};
                for(int k = j; k < c; k++) {
                    if(!ar[i][k]) break;
                    cnt[0]++;
                }
                for(int k = j; k >= 0; k--) {
                    if(!ar[i][k]) break;
                    cnt[1]++;
                }
                for(int k = i; k < r; k++) {
                    if(!ar[k][j]) break;
                    cnt[2]++;
                }
                for(int k = i; k >= 0; k--) {
                    if(!ar[k][j]) break;
                    cnt[3]++;
                }
                // small, great
                x += max(1, min(cnt[0], cnt[3] / 2)) - 1;
                x += max(1, min(cnt[0], cnt[2] / 2)) - 1;
                x += max(1, min(cnt[1], cnt[3] / 2)) - 1;
                x += max(1, min(cnt[1], cnt[2] / 2)) - 1;
                // great, small
                x += max(1, min(cnt[0] / 2, cnt[3])) - 1;
                x += max(1, min(cnt[0] / 2, cnt[2])) - 1;
                x += max(1, min(cnt[1] / 2, cnt[3])) - 1;
                x += max(1, min(cnt[1] / 2, cnt[2])) - 1;
            }
        }
        cout << "Case #" << T-t << ": " << x << "\n";
    }
}

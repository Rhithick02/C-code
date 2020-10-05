#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
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
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli sum = 0, res = 0, te = 0;
        int n, m, x;
        cin >> n >> m;
        vector <int> ar[n];
        For(i, 0, n) {
            For(j, 0, m) {
                cin >> x;
                ar[i].pb(x);
                te += x;
            }
        }
        For(i, 0, n/ 2) {
            For(j, 0, m / 2) {
                sum = 0;
                if(i == n-i-1 && j == m-j-1) continue;
                if(i != n-i-1 && j != m-j-1) {
                    sum += ar[i][j] + ar[n-i-1][j] + ar[i][m-j-1] + ar[n-i-1][m-j-1];
                    sum /= 4;
                    lli temp = 2e9;
                    For(k, -1, 2) {
                        lli rat = 0;
                        rat += abs(sum-ar[i][j] + k) + abs(sum-ar[n-i-1][j] + k);
                        rat += abs(sum-ar[i][m-j-1] + k) + abs(sum-ar[n-i-1][m-j-1] + k);
                        temp = min(temp, rat);
                    }
                    res += temp;
                } else if(i == n-i-1) {
                    sum += ar[i][j] + ar[i][m-j-1];
                    sum /= 2;
                    lli temp = 2e9;
                    For(k, -1, 2) {
                        lli rat = 0;
                        rat += abs(sum-ar[i][j] + k) + abs(sum-ar[i][m-j-1] + k);
                        temp = min(temp, rat);
                    }
                    res += temp;
                } else if(j == m-j-1) {
                    sum += ar[i][j] + ar[n-i-1][m];
                    sum /= 2;
                    lli temp = 2e9;
                    For(k, -1, 2) {
                        lli rat = 0;
                        rat += abs(sum-ar[i][j] + k) + abs(sum-ar[n-i-1][j] + k);
                        temp = min(temp, rat);
                    }
                    res += temp;
                }
            }
        }
        cout << res << "\n";
    }
}
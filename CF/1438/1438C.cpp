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
#define mod 1000000007
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int r, c;
        cin >> r >> c;
        int ar[r][c];
        For(i, 0, r) {
            For(j, 0, c) {
                cin >> ar[i][j];
                if((i + j) % 2) {
                    ar[i][j] += (ar[i][j] & 1 ? 0 : 1);
                } else {
                    ar[i][j] += (ar[i][j] & 1 ? 1 : 0);
                }
            }
        }
        For(i, 0, r) {
            For(j, 0, c) cout << ar[i][j] << " ";
            cout << "\n";
        }
    }
}
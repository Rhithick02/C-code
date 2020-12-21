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
        bool ok = true;
        int n, k;
        string a, b;
        cin >> n >> k >> a >> b;
        int alp[2][26];
        For(i, 0, 2) For(j, 0, 26) alp[i][j] = 0;
        For(i, 0, n) {
            alp[0][a[i]-'a']++;
            alp[1][b[i]-'a']++;
        }
        For(i, 0, 25) {
            if(alp[0][i] < alp[1][i]) {
                ok = false;
                break;
            } else if((alp[0][i] - alp[1][i]) % k) {
                ok = false;
                break;
            } else alp[0][i+1] += alp[0][i] - alp[1][i];
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
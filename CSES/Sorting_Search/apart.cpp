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
    int n, m, k, cnt = 0, pos = 0;
    cin >> n >> m >> k;
    vector <int> app(n), st(m);
    For(i, 0, n) cin >> app[i];
    For(i, 0, m) cin >> st[i];
    sort(asc(app)), sort(asc(st));
    For(i, 0, m) {
        while(st[i] - app[pos] > k) pos++;
        if(pos >= n) break;
        if(st[i] + k >= app[pos]) {
            cnt++;
            pos++;
        }
    }
    cout << cnt << "\n";
}
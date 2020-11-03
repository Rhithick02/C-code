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
    lli mini = 2e18;
    int n;
    cin >> n;
    vector <lli> ar(n);
    For(i, 0, n) cin >> ar[i];
    For(i, 0, (1 << n)) {
        int te = i;
        vector <lli> st(2);
        For(j, 0, n) {
            st[te&1] += ar[j];
            te = te >> 1;
        }
        mini = min(mini, abs(st[1]-st[0]));
    }
    cout << mini << "\n";
}
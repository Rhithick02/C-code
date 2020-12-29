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
#define MAX 1000001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <lli> pref(MAX);

int main(){
    ios::sync_with_stdio(false);
    pref[1] = 1;
    For(i, 2, MAX) {
        pref[i] = (pref[i-1] + 1ll * i * (i+1) / 2) % mod;
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << pref[n] << "\n";
    }
}
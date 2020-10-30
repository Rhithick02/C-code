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

lli ncr(lli n) {
    return n * (n-1) / 2;
}
int main(){
    ios::sync_with_stdio(false);
    lli n;
    cin >> n;
    vector <lli> ar(10010);
    ar[1] = ar[2] = 0;
    For(i, 3, 10010) ar[i] = ar[i-1] + 1LL * 8 * (i-2);
    For(i, 1, n+1) {
        if(i == 1) cout << "0\n";
        else cout << ncr(1LL*i*i) - ar[i] << "\n";
    }
}
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
    lli n, x, pos, ans = 1, great, less;
    vector <lli> fact(1005);
    fact[0] = 1;
    For(i, 1, 1005) fact[i] = (1LL * i * fact[i-1]) % mod;
    cin >> n >> x >> pos;
    int low = 0, high = n, mid;
    great = n - x;
    less = x - 1;
    while(low < high) {
        mid = low + high >> 1;
        if(mid > pos) {
            ans = (ans * great) % mod;
            great--;
            high = mid;
        } else {
            if(mid != pos) {
                ans = (ans * less) % mod;
                less--;
            }
            low = mid + 1;
        }
    }
    ans = (ans * fact[less+great]) % mod;
    cout << ans << "\n";
}
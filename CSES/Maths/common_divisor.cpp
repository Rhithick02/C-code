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
#define MAX 1000001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <int> ar(MAX);
void divisors(int k) {
    For(i, 1, (int)sqrt(k)+1) {
        if(k % i != 0)  continue;
        ar[i]++;
        if(i != k / i) ar[k / i]++;
    }
}
int main(){
    ios::sync_with_stdio(false);
    int n, x, res = 1;
    cin >> n;
    For(i, 0, n) {
        cin >> x;
        divisors(x);
    }
    for(int gcd = 1; gcd <= 1e6; gcd++) {
        int cnt = ar[gcd];
        if(cnt > 1) res = max(res, gcd);
    }
    cout << res << "\n";
}
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

// a^(b^c) equivalent to a^((b^c)%(mod-1))
//k = (b^c)%(mod-1) = x*(mod-1) + y
// a ^ k = a ^ y

lli power(lli x, lli y, lli p) {
    lli prod = 1;
    while(y) {
        if(y & 1)
            prod = (prod * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return prod;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli a, b, c, te;
        cin >> a >> b >> c;
        te = power(b, c, mod-1);
        cout << power(a, te, mod) << "\n";
    }
}
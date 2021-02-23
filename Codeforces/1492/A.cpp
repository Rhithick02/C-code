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

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli p, a, b, c;
        cin >> p >> a >> b >> c;
        lli b_a = (p + a - 1) / a;
        lli b_b = (p + b - 1) / b;
        lli b_c = (p + c - 1) / c;
        cout << min(b_a * a - p, min(b_b * b - p, b_c * c - p)) << endl;
    }
}
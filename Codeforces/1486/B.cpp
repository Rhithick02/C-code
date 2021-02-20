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
        int n;
        cin >> n;
        vector < lli > ar(n), ar1(n);
        For(i, 0, n) cin >> ar[i] >> ar1[i];
        sort(asc(ar)), sort(asc(ar1));
        if (n % 2) {
            cout << 1 << endl;
        } else {
            cout << 1LL * (abs(ar[n/2-1] - ar[n/2]) + 1) * (abs(ar1[n/2-1] - ar1[n/2]) + 1) << endl;
        }
    }
}
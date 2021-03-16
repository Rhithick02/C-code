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
        int n, m, r;
        double ans = 0, p, temp = 1.0;
        cin >> n >> m;
        int fl = n + 1;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        for(int i = n-1; i >= 0; i--) {
            if(ar[i] == i+1) fl = i + 1;
            else break;
        }
        fl--;
        For(i, 0, m) {
            cin >> r >> p;
            if(r < fl) continue;
            ans += temp * p;
            temp *= (1 - p);
        }
        cout << setprecision(8) << (fl ? ans : 1) << "\n";
    }
}
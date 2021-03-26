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
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        int n, k, cnt = 0;
        string s;
        cin >> n >> k >> s;
        for(int i = 0; i < (n + 1) / 2; i++) {
            if(s[i] != s[n-1-i]) {
                cnt++;
            }
        }
        cout << "Case #" << T-t << ": " << abs(k - cnt) << "\n";
    }
}
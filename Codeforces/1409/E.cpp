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
#define MAX 200001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, k, dummy, cnt = 0;
        cin >> n >> k;
        vector <int> x(n), st(n+1), s(n);
        For(i, 0, n) cin >> x[i];
        For(i, 0, n)  cin >> dummy;
        sort(asc(x));
        For(i, 0, n) {
            int end = upper_bound(asc(x), x[i] + k) - x.begin();
            s[i] = end - i;
        }
        for(int i = n-1; i >= 0; i--) {
            st[i] = max(st[i+1], s[i]);
        }
        for(int i = 0; i < n; i++) {
            cnt = max(cnt, s[i] + st[i+s[i]]);
        }
        cout << cnt << endl;
    }
}
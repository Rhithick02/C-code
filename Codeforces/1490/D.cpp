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
#define MAX 104
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

vector <int> res(MAX);
void solve(int l, int r, int m, int cnt, vector <int> ar) {
    if(l > r) {
        return;
    }
    res[ar[m]] = cnt;
    int maxi = max_element(ar.begin()+l, ar.begin()+m) - ar.begin();
    solve(l, m-1, maxi, cnt+1, ar);
    maxi = max_element(ar.begin()+m+1, ar.begin()+r+1) - ar.begin();
    solve(m+1, r, maxi, cnt+1, ar);
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) {
            cin >> ar[i];
            res[i] = 0;
        }
        int maxi = max_element(asc(ar)) - ar.begin();
        solve(0, n-1, maxi, 0, ar);
        For(i, 0, n) cout << res[ar[i]] << " ";
        cout << "\n";
    }
}
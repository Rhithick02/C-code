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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int t;
    cin >> t;
    while(t--) {
        bool ans = true, inversion = false;
        int n, cnt[2] = {0, 0};
        string a, b;
        cin >> n >> a >> b;
        vector <bool> te(n);
        For(i, 0, n) {
            cnt[a[i]-'0']++;
            te[i] = (cnt[0] == cnt[1]);
        }
        for(int i = n - 1; i >= 0; i--) {
            if(!inversion) {
                if(a[i] == b[i]) continue;
                if(te[i]) inversion = true;
                else {
                    ans = false;
                    break;
                }
            } else {
                if(a[i] != b[i]) continue;
                if(te[i]) inversion = false;
                else {
                    ans = false;
                    break;
                }
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
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
        int n, cnt = 0, pos = 0, temp = 0;
        long long ans = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == '*') {
                cnt++;
            }
        }
        for(int i = 0; i < n; i++) {
            if(s[i] == '*') {
                temp++;
            }
            if(temp == (cnt + 1) / 2) {
                pos = i;
                break;
            }
        }
        int l = pos - 1, r = pos + 1;
        for(int i = l; i >= 0; i--) {
            if(s[i] == '*') {
                ans += l - i;
                l--;
            }
        }
        for(int i = r; i < n; i++) {
            if(s[i] == '*') {
                ans += i - r;
                r++;
            }
        }
        cout << ans << "\n";
    }
}

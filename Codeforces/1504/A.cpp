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
        string s;
        cin >> s;
        int n = s.length(), pos = -1;
        for(int i = 0; i < n; i++) {
            if(s[i] != 'a') {
                pos = n - i;
                break;
            }
        }
        if(pos == -1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            For(i, 0, pos) cout << s[i];
            cout << 'a';
            For(i, pos, n) cout << s[i];
            cout << "\n";
        }
    }
}
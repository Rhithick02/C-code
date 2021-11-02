#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool is_permute(vector <int>& ar, int n) {
    vector <bool> vi(n+1, false);
    for(auto it: ar) {
        if(it <= n && it >= 1) {
            vi[it] = true;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(!vi[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> ar(n), blue, red;
        string s;
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        cin >> s;
        // Case 1
        if(is_permute(ar, n)) {
            cout << "YES\n";
            continue;
        }
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'R') {
                red.pb(ar[i]);
                if(ar[i] > n) {
                    ok = false;
                    break;
                }
            } else {
                blue.pb(ar[i]);
                if(ar[i] < 1) {
                    ok = false;
                    break;
                }
            }
        }
        if(!ok) {
            cout << "NO\n";
            continue;
        }
        vector <int> cred(n+1), cblu(n+1);
        for(auto it: red) {
            if(it >= 1) {
                cred[it]++;
            }
        }
        for(auto it: blue) {
            if(it <= n) {
                cblu[it]++;
            }
        }
        // Suffix
        for(int i = n; i >= 1; i--) {
            if(i != n) cred[i] += cred[i+1];
            if(cred[i] > n-i+1) {
                ok = false;
            }
        }
        // Prefix
        for(int i = 1; i <= n; i++) {
            if(i != 1) cblu[i] += cblu[i-1];
            if(cblu[i] > i) {
                ok = false;
            }
        }
        if(ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
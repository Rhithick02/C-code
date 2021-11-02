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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string s, word;
        cin >> s >> word;
        vector <int> pos;
        for(int i = 0; i < word.length(); i++) {
            for(int j = 0; j < 26; j++) {
                if(word[i] == s[j]) {
                    pos.pb(j+1);
                }
            }
        }
        if(pos.size() <= 1) {
            cout << 0 << endl;
        } else {
            int ans = 0;
            for(int i = 1; i < pos.size(); i++) {
                ans += abs(pos[i] - pos[i-1]);
            }
            cout << ans << endl;
        }
    }
}
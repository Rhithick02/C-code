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
        long long n = s.length(), ans = 0;
        vector <vector <int>> store(2, vector <int> (2, -1));
        for(int i = 0; i < n; i++) {
            int j = i - 1;
            int p = i & 1;
            if(s[i] != '0') {
                j = min(j, max(store[1][p^1], store[0][p]));
            }
            if(s[i] != '1') {
                j = min(j, max(store[1][p], store[0][p^1]));
            }
            if(s[i] != '?') {
                store[s[i] - '0'][p] = i;
            }
            ans += i - j;
        }
        cout << ans << endl;
    }
}
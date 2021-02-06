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

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        bool ok = true;
        int x, y;
        string s;
        cin >> x >> y >> s;
        if(x < 0) {
            For(i, 0, s.length()) {
                if(s[i] == 'L') x++;
            }
            if(x < 0) ok = false;
        } else {
            For(i, 0, s.length()) {
                if(s[i] == 'R') x--;
            }
            if(x > 0) ok = false;
        }
        if(y < 0) {
            For(i, 0, s.length()) {
                if(s[i] == 'D') y++;
            }
            if(y < 0) ok = false;
        } else {
            For(i, 0, s.length()) {
                if(s[i] == 'U') y--;
            }
            if(y > 0) ok = false;
        }
        if(ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
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
        int x, y, n, cost = 0;
        bool ok = true;
        string s, temp = "";
        cin >> x >> y >> s;
        n = s.length();
        For(i, 0, n) {
            if(s[i] != '?') {
                temp += s[i];
                ok = true;
            } else if(ok) {
                ok = false;
                temp += s[i];
            }
        }
        n = temp.length();
        For(i, 1, n - 1) {
            if(temp[i] != '?' || temp[i-1] == temp[i+1]) continue;
            if(temp[i-1] == 'C') temp[i] = 'J';
            else temp[i] = 'C';
        }
        For(i, 1, n) {
            if(temp[i] == 'C' && temp[i-1] == 'J') cost += y;
            else if(temp[i] == 'J' && temp[i-1] == 'C') cost += x;
        }
        cout << "Case #" << T - t << ": " << cost << "\n";
    }
}
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
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        bool ans = false, check = true;
        vector <int> rmv;
        For(i, 0, n-1) {
            if(s[i] == '1') {
                bool ok_z = true;
                For(j, i+1, n-1) {
                    if(s[j] == '0' && s[j] == s[j+1]) 
                    ok_z = false;
                }
                if(!ok_z) rmv.pb(i);
                else {
                    ans = true;
                    break;
                }
            }
        }
        For(i, 0, (int)rmv.size() - 1) {
            if(rmv[i+1] - rmv[i] == 1) {
                check = false;
                ans = false;
                break;
            }
        }
        if(ans || check) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
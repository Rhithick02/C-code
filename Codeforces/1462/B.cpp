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
        int n, fl = 0, st = 0;
        string s, temp = "2020";
        cin >> n >> s;
        for(int i = 0; i < 4; i++) {
            if(s[i] == temp[st]) {
                st++;
            } else {
                break;
            }
        }
        if(st == 4) {
            cout << "Yes\n";
        } else {
            for(int i = n-4+st; i < n; i++) {
                if(s[i] == temp[st]) {
                    st++;
                } else {
                    break;
                }
            }
            if(st == 4) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
}
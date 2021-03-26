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
        string a, b;
        int cnt = 0;
        cin >> a >> b;
        if(a.length() > b.length()) {
            swap(a, b);
        }
        for(int i = 0; i < a.length(); i++) {
            for(int j = i; j < a.length(); j++) {
                string temp = "";
                for(int k = i; k <= j; k++) {
                    temp += a[k];
                }
                int si = temp.length();
                for(int l = 0; l + si <= b.length(); l++) {
                    if(b.substr(l, si) == temp) {
                        cnt = max(cnt, si);
                    }
                }
            }
        }
        cout << a.length() + b.length() - 2 * cnt << "\n";
    }
}
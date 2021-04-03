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
        int n, cnt = 0, cur = 0, fl = 0;
        string s, a = "", b = "";
        char ch[] = {'(', ')'};
        cin >> n >> s;
        For(i, 0, n) cnt += (s[i] == '1');
        if(cnt & 1 || s[0] == '0' || s[n-1] == '0') {
            cout << "NO\n";
            continue;
        }
        For(i, 0, n) {
            if(s[i] == '1') {
                a += (cur >= cnt / 2 ? ')' : '(');
                b += a[i];
                cur++;
            } else {
                a += ch[fl];
                fl ^= 1;
                b += ch[fl];
            }
        }
        cout << "YES\n";
        cout << a << "\n" << b << "\n";
    }
}
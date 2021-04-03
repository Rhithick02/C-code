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
        bool ans = true;
        int n, cnt = 0;
        string s, a = "", b = "";
        cin >> n >> s;
        For(i, 0, n) {
            if(i & 1) a += ')';
            else a += '(';
        }
        For(i, 0, n) {
            if(s[i] == '1') b += a[i];
            else b += (a[i] == '(' ? ')' : '(');
        }
        For(i, 0, n) {
            if(b[i] == '(') cnt++;
            else cnt--;
            if(cnt < 0) {
                ans = false;
                break;
            }
        }
        if(ans && !cnt) {
            cout << "Yes\n";
            cout << a << "\n" << b << "\n";
        } else {
            cout << "No\n";
        }
    }
}
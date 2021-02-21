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
    int n, cnt[2] = {0};
    string s;
    cin >> n >> s;
    For(i, 0, n) {
        cnt[s[i] - '0']++;
    }
    if(cnt[0] != cnt[1]) {
        cout << "1\n";
        cout << s << "\n";
    } else {
        cout << "2\n";
        cout << s[0] << " ";
        For(i, 1, n) cout << s[i];
        cout << "\n";
    }
}
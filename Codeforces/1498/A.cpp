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

int sum(lli x) {
    int cnt = 0;
    while(x) {
        cnt += x % 10;
        x /= 10;
    }
    return cnt;
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli n, temp;
        bool ok = true;
        cin >> n;
        temp = n;
        while(ok) {
            if(__gcd(temp, 1ll * sum(temp)) > 1) {
                cout << temp << "\n";
                ok = false;
            }
            temp++;
        }
    }
}
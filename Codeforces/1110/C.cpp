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

void divisors(int k,vector <int> &ar) {
    For(i, 1, (int)sqrt(k)+1) {
        if(k % i != 0)  continue;
        ar.pb(i);
        if(i != k / i) ar.pb(k/i);
    }
    sort(asc(ar));
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0, tmp = 0, st;
        cin >> n;
        st = n;
        while(n) {
            cnt++;
            if(n & 1) {
                tmp = cnt;
            }
            n /= 2;
        }
        if((int)pow(2, cnt) - 1 != st) {
            cout << (int)pow(2, cnt) - 1 << "\n";
        } else {
            vector <int> ar;
            divisors(st, ar);
            // for(auto it: ar) cout << it;
            cout << ar[ar.size() - 2] << "\n";
        }
    }
}
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
        int n, k, x, fl = 0;
        set <int> te;
        cin >> n >> k;
        vector <int> st(n+10);
        For(i, 0, n) {
            cin >> x;
            te.insert(x);
            if(x < n + 10)
                st[x]++;
        }
        if(!k) {
            cout << (int)te.size() << "\n";
            continue;
        }
        while(st[fl]) fl++;
        int maxi = *te.rbegin();
        if(fl > maxi) {
            cout << (int)te.size() + k << "\n";
        } else {
            te.insert((fl + maxi + 1) / 2);
            cout << (int)te.size() << "\n";
        }
    }
}
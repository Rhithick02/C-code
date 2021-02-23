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
        int n, prev;
        cin >> n;
        vector <int> temp(n);
        vector <pair <int, int>> ar(n);
        For(i, 0, n) {
            cin >> ar[i].fi;
            ar[i].se = i;
            temp[i] = ar[i].fi;
        }
        sort(des(ar));
        prev = n;
        For(i, 0, n) {
            if(prev < ar[i].se) {
                continue;
            }
            For(j, ar[i].se, prev) {
                cout << temp[j] << " ";
            }
            prev = ar[i].se;
        }
        cout << "\n";
    }
}
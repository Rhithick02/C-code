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
    char ch[3] = {'a', 'b', 'c'};
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int j = 0;
        For(i, 0, k) cout << ch[j];
        For(i, 0, n-k) {
            j = (j + 1) % 3;
            cout << ch[j];
        }
        cout << "\n";
    }
}
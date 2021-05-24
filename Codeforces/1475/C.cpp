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
#define MAX 200001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int t;
    cin >> t;
    while(t--) {
        lli count = 0;
        int a, b, k;
        cin >> a >> b >> k;
        vector <int> boys(k), girls(k);
        map <int, int> store_b, store_g;
        for(int i = 0; i < k; i++) {
            cin >> boys[i];
            store_b[boys[i]]++;
        }
        for(int i = 0; i < k; i++) {
            cin >> girls[i];
            store_g[girls[i]]++;
        }
        for(int i = 0; i < k; i++) {
            count += k + 1 - store_b[boys[i]] - store_g[girls[i]];
        }
        cout << count / 2 << "\n";
    }
}
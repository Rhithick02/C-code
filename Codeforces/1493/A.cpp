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
        int n, k;
        cin >> n >> k;
        set <int> te;
        For(i, 1, n+1) {
            if(i != k)
                te.insert(i);
        }
        for(int i = k - 1; i >= 1; i--) {
            if(te.find(i) == te.end())
                break;
            if(i != k - i && te.find(k - i) != te.end()) {
                te.erase(k-i);
            }
        }
        cout << te.size() << "\n";
        for(auto it: te) cout << it << " ";
        cout << "\n";
    }
}
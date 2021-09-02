#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int n, k, i = 0;
    cin >> n >> k;
    indexed_set te;
    for(int i = 1; i <= n; i++) {
        te.insert(i);
    }
    while(te.size() > 1) {
        i = (i+k) % te.size();
        auto it = te.find_by_order(i);
        cout << *it << " ";
        te.erase(*it);
        i %= te.size();
    }
    cout << *te.begin() << "\n";
}
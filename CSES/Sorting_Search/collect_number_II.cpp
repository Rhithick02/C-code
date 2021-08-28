#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define push_back pb
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    vector <int> ar(n), vi(n+2, 0);
    vi[n+1] = n+1;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
        vi[ar[i]] = i+1;
        if(vi[ar[i]-1] == 0) {
            cnt++;
        }
    }
    for(int i = 0, u, v, x, y; i < m; i++) {
        cin >> u >> v;
        u--, v--;
        x = ar[u], y = ar[v];
        if(vi[x] < vi[x-1]) cnt--;
        if(vi[x] > vi[x+1]) cnt--;
        if(x != y-1 && vi[y] < vi[y-1]) cnt--;
        if(x != y+1 && vi[y] > vi[y+1]) cnt--;

        swap(vi[x], vi[y]);
        swap(ar[u], ar[v]);

        if(vi[x] < vi[x-1]) cnt++;
        if(vi[x] > vi[x+1]) cnt++;
        if(x != y-1 && vi[y] < vi[y-1]) cnt++;
        if(x != y+1 && vi[y] > vi[y+1]) cnt++;

        cout << cnt << "\n";
    }
}
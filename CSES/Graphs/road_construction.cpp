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

// Variables
int num_comp;
vector<int> par, siz;
set<int, greater<int>> te;

// Functions
void make_set(int a) {
    par[a] = a;
}
int find_set(int a) {
    if (par[a] == a) {
        return a;
    }
    return par[a] = find_set(par[a]);
}
void union_by_size(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a == b) {
        cout << num_comp << " " << *te.begin() << "\n";
        return;
    }
    num_comp--;
    if (siz[a] < siz[b]) {
        swap(a, b);
    }
    par[b] = a;
    siz[a] += siz[b];
    te.insert(siz[a]);
    cout << num_comp << " " << *te.begin() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    num_comp = n;
    vector<pair<int, int>> ar;
    par.resize(n+1);
    siz.resize(n+1, 1);
    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar.pb({u, v});
    }
    // Making set
    for (int i = 1; i <= n; i++) {
        make_set(i);
    }
    // Union
    for (auto it: ar) {
        union_by_size(it.fi, it.se);
    }
}
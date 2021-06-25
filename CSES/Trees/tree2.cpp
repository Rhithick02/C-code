// Diamter of tree
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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void dfs(int s, vector <int> &length, vector <int> ar[], int p = 0) {
    for(auto it: ar[s]) {
        if(it != p) {
            length[it] = length[s] + 1;
            dfs(it, length, ar, s);
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector <int> ar[n+1], length(n+1);
    for(int i = 0, x, y; i < n-1; i++) {
        cin >> x >> y;
        ar[x].pb(y);
        ar[y].pb(x);
    }
    dfs(1, length, ar);
    int idx = max_element(asc(length)) - length.begin();
    fill(asc(length), 0);
    dfs(idx, length, ar);
    cout << *max_element(asc(length)) << endl;
}
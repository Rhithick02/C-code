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

struct tr {
    int x, y;
    char ch;
};
int main() {
    int n , m, dist = 0, temp = 1;
    bool ok = true;
    vector <char> ans;
    pair <int, int> st, ed;
    char ar[] = {'U', 'L', 'R', 'D'}, ch;
    int dx[] = {-1, 0, 0, 1}, dy[] = {0, -1, 1, 0};

    cin >> n >> m;
    vector <vector <tr>> vi(n, vector <tr>(m, {-1, -1, '.'}));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ch;
            if(ch == '#') {
                vi[i][j] = {mod, mod, '#'};
            } else if(ch == 'A') {
                st = {i, j};
                vi[i][j] = {0, 0, '.'};
            } else if(ch == 'B') {
                ed = {i, j};
            }
        }
    }

    queue <pair<int, int>> q;
    q.push(st);
    while(!q.empty() && ok) {
        dist++;
        while(temp-- && ok) {
            pair <int, int> cur = q.front();
            q.pop();
            for(int i = 0; i < 4; i++) {
                int x = cur.fi + dx[i], y = cur.se + dy[i];
                if(x >= 0 && y >= 0 && x < n && y < m && 
                    make_pair(vi[x][y].x, vi[x][y].y) == make_pair(-1, -1)) {
                    q.push({x, y});
                    vi[x][y] = {cur.fi, cur.se, ar[i]};
                }
                if(ed == make_pair(x, y)) {
                    ok = false;
                }
            }
        }
        temp = q.size();
    }
    if(ok) {
        cout << "NO\n";
        exit(0);
    }
    cout << "YES\n";
    cout << dist << endl;
    while(dist--) {
        ans.pb(vi[ed.fi][ed.se].ch);
        ed = {vi[ed.fi][ed.se].x, vi[ed.fi][ed.se].y};
    }
    reverse(ans.begin(), ans.end());
    for(auto it: ans) {
        cout << it;
    }
}
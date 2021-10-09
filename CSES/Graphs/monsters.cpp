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

int n, m;
bool check(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}
struct tp {
    char mp;
    int dir = -1;
    int dist = mod;
    pair <int, int> par;
};
int main() {
    cin >> n >> m;
    pair <int, int> st;
    queue <pair<int, int>> q;
    vector <vector <tp>> ar(n, vector <tp>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ar[i][j].mp;
            if(ar[i][j].mp == 'A') {
                st = {i, j};
            } else if(ar[i][j].mp == 'M') {
                q.push({i, j});
                ar[i][j].dist = 0;
            }
        }
    }
    vector <vector <tp>> te = ar;
    int dx[] = {-1, 0, 0, 1}, dy[] = {0, 1, -1, 0};
    char dir[] = {'U', 'R', 'L', 'D'};
    while(!q.empty()) {
        pair <int, int> cur = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int x = cur.fi + dx[i], y = cur.se + dy[i];
            if(!check(x, y) || ar[x][y].mp == '#') {
                continue;
            }
            if(ar[x][y].dist != mod) {
                continue;
            }
            q.push({x, y});
            ar[x][y].dist = ar[cur.fi][cur.se].dist + 1;
        }
    }
    q.push(st);
    te[st.fi][st.se].dist = 0;
    te[st.fi][st.se].dir = 0;
    te[st.fi][st.se].par = {-1, -1};
    while(!q.empty()) {
        pair <int, int> cur = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int x = cur.fi + dx[i], y = cur.se + dy[i];
            if(!check(x, y) || te[x][y].mp == '#') {
                continue;
            }
            if(te[x][y].dir != -1) {
                continue;
            }
            q.push({x, y});
            te[x][y].dist = te[cur.fi][cur.se].dist + 1;
            te[x][y].dir = i;
            te[x][y].par = {cur.fi, cur.se};
        }
    }
    bool ok = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!(!i || i == n-1 || !j || j == m-1)) continue;
            if(ar[i][j].dist > te[i][j].dist) {
                ok = true;
                pair <int, int> temp = {i, j};
                cout << "YES\n";
                int si = te[i][j].dist; 
                cout << si << endl;
                vector <char> rev_ans;
                while(si--) {
                    rev_ans.pb(dir[te[temp.fi][temp.se].dir]);
                    temp = te[temp.fi][temp.se].par;
                }
                reverse(rev_ans.begin(), rev_ans.end());
                for(auto it: rev_ans) {
                    cout << it;
                }
                break;
            }
        }
        if(ok) break;
    }
    if(!ok) {
        cout << "NO\n";
    }
}
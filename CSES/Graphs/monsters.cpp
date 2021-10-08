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

struct tp {
    char mp, di;
    int dist = 0;
};
int main() {
    int n, m;
    cin >> n >> m;
    pair <int, int> st;
    vector <vector <tp>> ar(n, vector <tp>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ar[i][j].mp;
            ar[i][j].dist = -1;
            ar[i][j].di = '-';
            if(ar[i][j].mp == 'A') {
                st = {i, j};
            }
        }
    }
    queue <pair<int, int>> q;
    int dx[] = {-1, 0, 0, 1}, dy[] = {0, 1, -1, 0};
    char dir[] = {'U', 'L', 'R', 'D'};
    q.push(st);
    while(!q.empty()) {
        int temp = q.size();
        while(temp--) {
            pair <int, int> cur = q.front();
            q.pop();
            for(int i = 0; i < 4; i++) {
                int x = cur.fi + dx[i], y = cur.se + dy[i];
                if(x >= 0 && x < n && y >= 0 && y < m && ar[x][y].dist != -1) {
                    continue;
                }
                if(ar[x][y].mp == '#') continue;
                q.push({x, y});
                ar[x][y].dist = ar[cur.fi][cur.se].dist + 1;
                ar[x][y].di = i;
            }
        }
    }
}
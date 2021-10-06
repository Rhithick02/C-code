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
void dfs(vector<vector<bool>>& vi, int x, int y) {
    int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
    vi[x][y] = true;
    for(int i = 0; i < 4; i++) {
        int _x = x + dx[i], _y = y + dy[i];
        if(_x >= 0 && _y >= 0 && _x < n && _y < m && (!vi[x+dx[i]][y+dy[i]])) {
            dfs(vi, _x, _y);
        }
    }
}
int main() {
    int cnt = 0;
    cin >> n >> m;
    vector <vector <char>> ar(n, vector <char>(m));
    vector <vector <bool>> vi(n, vector <bool>(m, false));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ar[i][j];
            if(ar[i][j] == '#') {
                vi[i][j] = true;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(vi[i][j]) continue;
            dfs(vi, i, j);
            cnt++;
        }
    }
    cout << cnt << endl;
}
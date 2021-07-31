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

vector <vector <int>> grid(7, vector <int>(7, 0));
int dx[] = {0, 1, -1, 0}, dy[] = {1, 0, 0, -1}, cnt = 0;
string s;
void solve(int i, int x, int y) {
    if(x == 6 && y == 0) {
        if(i == 48) {
            cnt++;
        }
        return;
    }
    if(x >= 7 || y >= 7 || x < 0 || y < 0 || grid[x][y]) {
        return;
    }
    if(((x + 1 == 7 || !x  || (grid[x - 1][y] && grid[x + 1][y])) && y - 1 >= 0 && y + 1 < 7 && !grid[x][y - 1] && !grid[x][y + 1]) ||
        ((y + 1 == 7 || !y || (grid[x][y - 1] && grid[x][y + 1])) && x - 1 >= 0 && x + 1 < 7 && !grid[x - 1][y] && !grid[x + 1][y]) ||
        ((x == 0 || x + 1 == 7 || (grid[x + 1][y] && grid[x - 1][y])) && y - 1 >= 0 && y + 1 < 7 && !grid[x][y - 1] && !grid[x][y + 1]) ||
        ((y == 0 || y + 1 == 7 || (grid[x][y + 1] && grid[x][y - 1])) && x - 1 >= 0 && x + 1 < 7 && !grid[x - 1][y] && !grid[x + 1][y])) {
            return;
    }
    if(s[i] == 'R') {
        grid[x][y] = 1;
        solve(i+1, x, y+1);
        grid[x][y] = 0;
    } else if(s[i] == 'D') {
        grid[x][y] = 1;
        solve(i+1, x+1, y);
        grid[x][y] = 0;
    } else if(s[i] == 'U') {
        grid[x][y] = 1;
        solve(i+1, x-1, y);
        grid[x][y] = 0;
    } else if(s[i] == 'L') {
        grid[x][y] = 1;
        solve(i+1, x, y-1);
        grid[x][y] = 0;
    } else {
        for(int j = 0; j < 4; j++) {
            grid[x][y] = 1;
            solve(i+1, x+dx[j], y+dy[j]);
            grid[x][y] = 0;
        }
    }
}
int main() {
    cin >> s;
    solve(0, 0, 0);
    cout << cnt << endl;
}
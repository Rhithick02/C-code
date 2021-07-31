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

int cnt = 0;
void solve(vector <vector <char>>& board, int cur_row) {
    if(cur_row == 8) {
        cnt++;
        return;
    }
    for(int i = 0; i < 8; i++) {
        if(board[cur_row][i] == '*') {
            continue;
        }
        bool ok = true;
        for(int j = 0; j < 8; j++) {
            if(board[cur_row][j] == '1' || board[j][i] == '1') {
                ok = false;
                break;
            }
        }
        if(!ok) continue;
        for(int j = 1; j < 8; j++) {
            // Left top diag
            if((cur_row-j >= 0) && (i-j >= 0) && board[cur_row-j][i-j] == '1') {
                ok = false;
            }
            // Left bot diag
            if((cur_row+j < 8) && (i-j >= 0) && board[cur_row+j][i-j] == '1') {
                ok = false;
            }
            // right bot diag
            if((cur_row+j < 8) && (i+j < 8) && board[cur_row+j][i+j] == '1') {
                ok = false;
            }
            // right top diag
            if((cur_row-j >= 0) && (i+j < 8) && board[cur_row-j][i+j] == '1') {
                ok = false;
            }
            if(!ok) break;
        }
        if(!ok) continue;
        board[cur_row][i] = '1';
        solve(board, cur_row + 1);
        board[cur_row][i] = '.';
    }
}
int main() {
    vector <vector <char>> board(8, vector <char>(8));
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }
    solve(board, 0);
    cout << cnt << endl;
}
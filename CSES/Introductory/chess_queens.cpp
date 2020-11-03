#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
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
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

lli res = 0;
vector <string> s;
int dx[] = {-1, 0, 1}, dy[] = {-1, 0, 1};

bool isvalid(int r, int c) {
    if(s[r][c] == '*' || s[r][c] == '1') return false;
    for(int i = c+1; i < 8 ; i++) {
        if(s[r][i] == '1') return false;
        if(s[r][i] == '*') break;
    }
    for(int i = r+1; i < 8 ; i++) {
        if(s[i][c] == '1') return false;
        if(s[i][c] == '*') break;
    }
    for(int i = c-1; i >= 0; i--) {
        if(s[r][i] == '1') return false;
        if(s[r][i] == '*') break;
    }
    for(int i = r-1; i >= 0; i--) {
        if(s[i][c] == '1') return false;
        if(s[i][c] == '*') break;
    }
    for(int i = r-1, j = c+1; i >= 0 && j < 8; i--, j++) {
        if(s[i][j] == '1') return false;
        if(s[i][j] == '*') break;
    }
    for(int i = r+1, j = c+1; i < 8 && j < 8; i++, j++) {
        if(s[i][j] == '1') return false;
        if(s[i][j] == '*') break;
    }
    for(int i = r-1, j = c-1; i >= 0 && j >= 0; i--, j--) {
        if(s[i][j] == '1') return false;
        if(s[i][j] == '*') break;
    }
    for(int i = r+1, j = c-1; i < 8 && j >= 0; i++, j--) {
        if(s[i][j] == '1') return false;
        if(s[i][j] == '*') break;
    }
    return true;
}
int solve(int r, int c, int cnt) {
    if(!cnt) return 1;
    if(isvalid(r, c)) {
        s[r][c] = '1';
        For(i, 0, 3) {
            For(j, 0, 3) {
                res += solve(r+dx[i], c+dy[j], cnt-1);
            }
        }
        s[r][c] = '.';
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    int cnt = 8;
    string st;
    For(i, 0, 8) {
        cin >> st;
        s.pb(st);
    }
    For(i, 0, 8) {
        For(j, 0, 8) {
            solve(i, j, cnt);
        }
    }
    cout << res << "\n";
}
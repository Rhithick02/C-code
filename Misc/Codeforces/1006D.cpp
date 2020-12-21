#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int n, res = 0;
    string s[2];
    cin >> n >> s[0] >> s[1];
    For(i, 0, (n + 1) / 2) {
        if(i == n - 1 - i) {
            res += (s[0][i] != s[1][i] ? 1:0);
            continue;
        }
        int cnt = 10;
        char te[] = {s[0][i], s[0][n-1-i], s[1][i], s[1][n-1-i]};
        For(j, 0, 4) {
            For(k, 0, 4) {
                int temp = 0;
                if(s[0][i] != te[j]) temp++;
                if(s[0][n-1-i] != te[k]) temp++;
                char st[] = {te[j], te[k], s[1][i], s[1][n-1-i]};
                sort(st, st + 4);
                if(st[0] == st[1] && st[2] == st[3])
                    cnt = min(cnt, temp);
            }
        }
        res += cnt;
    }
    cout << res << endl;
}
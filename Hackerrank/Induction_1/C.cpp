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
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int st[n + 1][n + 1];
    For(i, 0, n + 1) {
        For(j, 0, n + 1) {
            if(!i || !j) {
                st[i][j] = 0;
                continue;
            }
            if(s1[i - 1] == s2[j - 1])
                st[i][j] = 1;
            else st[i][j] = max(st[i - 1][j], st[i][j - 1]);
        }
    }
    cout << st[n][n] << endl;
}
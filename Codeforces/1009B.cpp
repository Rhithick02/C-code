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
    int n, pos, cnt[2] = {0};
    string s, res = "";
    cin >> s;
    n = s.length();
    pos = n;
    For(i, 0, n) {
        if(s[i] == '2' && pos == n)
            pos = i;
        cnt[s[i] - '0']++;
    }
    For(i, 0, cnt[0]) res += '0';
    For(i, 0, cnt[1]) res += '1';
    For(i, pos, n) if(s[i] != '1') res += s[i];
    cout << res << "\n";
}
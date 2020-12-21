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
    int t;
    cin >> t;
    while(t--) {
        string s;
        int x, n, fl = 0;
        cin >> s >> x;
        n = s.length();
        string w(n, '1');
        For(i, 0, n) {
            if(i >= x && s[i] == '0') w[i - x] = '0';
            if(i < n - x && s[i] == '0') w[i + x] = '0';
        }
        For(i, 0, n) {
            if(i >= x && w[i - x] == '1') {
                if(s[i] != '1') fl = 1;
                else fl = 0;
            }
            else if(i < n - x && w[i + x] == '1') {
                if(s[i] != '1') fl = 1;
                else fl = 0;
            }
            else if(s[i] != '0') fl = 1;
            if(fl) break;
        }
        if(fl) cout << "-1\n";
        else cout << w << "\n";
    }
}
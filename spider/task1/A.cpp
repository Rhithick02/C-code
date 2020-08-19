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

int n, pos[2];
string s, a = "", b = "";
int check(char val) {
    For(i, 0, s.length()) {
        if(s[i] == val) {
            return i;
        }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin >> n >> s;
    reverse(asc(s));
    pos[0] = check('1');
    pos[1] = check('0');
    if(pos[0] == -1 || pos[1] == -1) {
        cout << -1 << endl;
        exit(0);
    }
    a = b = s;
    For(i, 0, pos[1]) a[i] = '0';
    a[pos[1]] = '1';
    For(i, 0, pos[0]) b[i] = '1';
    b[pos[0]] = '0';
    reverse(asc(a)), reverse(asc(b));
    cout << b << " " << a << endl;
}
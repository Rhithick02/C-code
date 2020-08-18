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
void check(int pos) {
    if (pos == -1) {
        cout << -1 << endl;
        exit(0);
    }
}
int main(){
    ios::sync_with_stdio(false);
    int n, pos = -1;
    string s, a = "", b = "";
    cin >> n >> s;
    reverse(asc(s));
    For(i, 0, s.length()) {
        if(s[i] == '0') {
            pos = i;
            break;
        }
    }
    a = b = s;
    check(pos);
    For(i, 0, pos) a[i] = '0';
    a[pos] = '1';
    pos = -1;
    For(i, 0, s.length()) {
        if(s[i] == '1') {
            pos = i;
            break;
        }
    }
    check(pos);
    For(i, 0, pos) b[i] = '1';
    b[pos] = '0';
    reverse(asc(a)), reverse(asc(b));
    cout << b << " " << a << endl;
}
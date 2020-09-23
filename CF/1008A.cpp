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
    int res = 0;
    string s;
    char st[] = {'a', 'e', 'i', 'o', 'u'};
    cin >> s;
    For(i, 0, s.length()) {
        res = 0;
        int fl = 0;
        For(j, 0, 5){
            if(s[i] == st[j]) {
                fl = 1;
                break;
            }
        }
        if(fl || s[i] == 'n') {
            res = 1;
            continue;
        }
        if(i == s.length()-1)
            break;
        For(j, 0, 5) {
            if(s[i+1] == st[j]) {
                res = 1;
                break;
            }
        }
        if(!res)
            break;
    }
    if(res) cout << "YES\n";
    else cout << "NO\n";
}
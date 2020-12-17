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
#define si s.length()
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0, te = 0;
        string s;
        cin >> n >> s;
        while(si && s[0] == s.back()) {
            te++;
            s.pop_back();
        }
        if(!si) {
            cnt += (te < 3 ? 0 : (te + 2)) / 3;
            cout << cnt << "\n";
            continue;
        }
        s.pb('$');
        For(i, 0, si - 1) {
            te++;
            if(s[i] != s[i+1]) {
                cnt += te / 3;
                te = 0;
            }
        }
        cout << cnt << "\n";
    }
}
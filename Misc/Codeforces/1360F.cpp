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
        int n, m;
        cin >> n >> m;
        bool must = false;
        vector <int> st(n);
        vector <string> ar(n);
        For(i, 0, n) cin >> ar[i];
        string res = ar[0];
        For(i, 0, m) {
            char te = res[i];
            For(j, 0, 26) {
                bool ok = true;
                res[i] = 'a' + j;
                For(k, 0, n) {
                    int check = 0;
                    For(l, 0, m) if(ar[k][l] != res[l]) check++;
                    if(check > 1) ok = false;
                }
                if(ok) {
                    must = true;
                    cout << res << endl;
                    break;
                }
            }
            res[i] = te;
            if(must) break;
        }
        if(!must) cout << "-1\n";
    }
}
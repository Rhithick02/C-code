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
        int n;
        bool ok = true;
        cin >> n;
        vector <string> ar(n);
        vector <int> alp(26);
        For(i, 0, n) {
            cin >> ar[i];
            For(j, 0, ar[i].size()) {
                alp[ar[i][j]-'a']++;
            }
        }
        For(i, 0, 26) {
            if(alp[i] % n) ok = false;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
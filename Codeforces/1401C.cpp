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
        int n, mini = 2e9, fl = 0;
        cin >> n;
        vector <int> ar(n), st;
        For(i, 0, n) {
            cin >> ar[i];
            mini = min(mini, ar[i]);
        }
        st = ar;
        sort(asc(ar));
        For(i, 0, n) {
            if(ar[i] % mini && ar[i] != st[i])
                fl = 1;
        }
        if(fl) cout << "NO\n";
        else cout << "YES\n";
    }
}
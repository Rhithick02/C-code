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
        cin >> n;
        vector <int> ar(n), stat(n), te;
        For(i, 0, n) cin >> ar[i];
        For(i, 0, n) {
            cin >> stat[i];
            if(!stat[i]) te.pb(ar[i]);
        }
        sort(asc(te));
        For(i, 0, n) {
            if(!stat[i]) {
                ar[i] = te.back();
                te.pop_back();
            }
        }
        for(auto it: ar) cout << it << " ";
        cout << "\n";
    }
}
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
        int n, rcnt[2] = {0}, bcnt[2] = {0};;
        string s;
        cin >> n >> s;
        For(i, 0, n) {
            if(i & 1) {
                bcnt[(s[i] - '0') % 2]++;
            } else {
                rcnt[(s[i] - '0') % 2]++;
            }
        }
        if(n & 1) {
            if(rcnt[1]) cout << "1\n";
            else cout << "2\n";
        } else {
            if(bcnt[0]) cout << "2\n";
            else cout << "1\n";
        }
    }
}
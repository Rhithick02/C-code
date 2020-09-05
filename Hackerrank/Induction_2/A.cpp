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
    lli n, k, ans = 0;
    cin >> n >> k;
    if(k == 1) {
        cout << n << endl;
        exit(0);
    }
    ans = log2(n) + 1;
    cout << (1LL << ans) - 1 << endl;
}
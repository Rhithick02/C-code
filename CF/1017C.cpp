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
    int n, res, cnt = 0, te;
    cin >> n;
    te = n;
    int ar[n + 1] = {0};
    ar[0] = -1;
    res = sqrt(n);
    for(int i = res; cnt < n; cnt++) {
        ar[i] = te--;
        i--;
        if(ar[i]) i = min(n, i + 2 * res);
    }
    For(i, 1, n + 1) cout << ar[i] << " ";
}
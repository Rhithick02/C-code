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
    int n;
    cin >> n;
    vector <lli> ar(n);
    For(i, 0, n) cin >> ar[i];
    cout << "1 " << n << endl;
    For(i, 0, n) cout << -1LL * (n * ar[i]) << " ";
    cout << endl;
    cout << "1 " << max(1, n - 1) << endl;
    For(i, 0, max(1, n - 1)) cout << 1LL * (n - 1) * ar[i] << " ";
    cout << endl;
    cout << n << " " << n << endl << 1LL * (n - 1) * ar[n - 1] << endl;
}
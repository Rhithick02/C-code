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
#define mod 1000000007

int main(){
    ios::sync_with_stdio(false);
    lli res = 1;
    int n, k;
    cin >> n >> k;
    vector <lli> a(n / k), b(n / k);
    For(i, 0, n / k) cin >> a[i];
    For(i, 0, n / k) cin >> b[i];
    For(i, 0, n / k) {
        lli maxi = (lli)pow(10, k), mini = b[i] * maxi / 10;
        if(mini % a[i]) mini += a[i] - mini % a[i];
        lli te = ((b[i] + 1) * (maxi / 10) - 1 - mini);
        if(te < 0) te = 0;
        else te = te / a[i] + 1;
        res *= (((maxi + a[i] -1) / a[i]) - te);
        res %= mod;
    }
    cout << res << "\n";
}
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
    lli n, m, x, d;
    lli sum = 0;
    cin >> n >> m;
    For(i, 0, m) {
        cin >> x >> d;
        sum += n * x;
        if(d >= 0) {
            sum += d * (n * (n - 1) / 2);
        }
        else {
            lli w = (n + 1) / 2;
            sum += d * (w * (w - 1) + (n & 1 ? 0 : w));
        }
    }
    cout << std :: fixed << setprecision(6) << 1.0 * sum / n << endl;
}
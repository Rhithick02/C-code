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
        int n, res = 1e9;
        cin >> n;
        if(n == 1) cout << "0\n";
        else if(n == 2) cout << "1\n";
        else if(n <= 4) cout << "2\n";
        else  {
            For(k, 2, sqrt(n) + 1) {
                int te = k - 1 + ceil(1.0 * (n - k) / k);
                if(te > res) break;
                res = te;
            }
            cout << res << "\n";
        }
    }
}
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
        int n, sum[2] = {0};
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) {
            cin >> ar[i];
            sum[i&1] += ar[i];
        }
        if(sum[0] != sum[1]) {
            For(i, 0, n) {
                vector <int> te;
                sum[0] = 0, sum[1] = 0;
                For(j, 0, n) if(j != i) te.pb(ar[j]);
                For(j, 0, n - 1) {
                    sum[j&1] += te[j];
                }
                if(sum[0] == sum[1]) {
                    cout << n - 1 << "\n";
                    for(auto it: te) cout << it << " ";
                    cout << "\n";
                    break;
                }
            }
            continue;
        }
        cout << n << "\n";
        for(auto it: ar) cout << it << " ";
        cout << "\n";
    }
}
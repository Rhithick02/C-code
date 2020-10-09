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
        lli n, cnt = 0;
        cin >> n;
        lli ar[n][n];
        For(i, 0, n) {
            For(j, 0, n) {
                cin >> ar[i][j];
                if(i == j && ar[i][j] <= 0)  cnt += abs(ar[i][j]);
            }
        }
        For(i, 0, n) {
            For(j, 0, n) {
                if(j <= i) continue;
                if(ar[i][j] < 0 && ar[j][i] < 0) 
                    cnt += abs(ar[i][j] + ar[j][i]);
                else 
                    cnt += abs(ar[i][j] - ar[j][i]);
            }
        }
        cout << cnt << "\n";
    }
}
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
        int n, k, cnt = 0;
        cin >> n >> k;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        sort(asc(ar));
        For(i, 1, n) {
            cnt += (k - ar[i]) / ar[0];
        }
        cout << cnt << "\n";
    }
}
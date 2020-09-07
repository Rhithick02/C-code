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
        int n;
        lli sum = 0, cnt = 0;
        cin >> n;
        vector <lli> ar(n);
        For(i, 0, n) cin >> ar[i];
        For(i, 0, n) {
            if(ar[i] >= 0) sum += ar[i];
            else {
                ar[i] = -ar[i];
                lli te = min(sum, ar[i]);
                sum -= te;
                cnt += ar[i] - te;
            }
        }
        cout << cnt << "\n";
    }
}
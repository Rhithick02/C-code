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
    int t, tr = 0;
    cin >> t;
    while(t--) {
        tr++;
        int n, res = 0, dif, cnt = 1;
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        For(i, 1, n) {
            if(cnt == 1) {
                dif = ar[i] - ar[i-1];
                cnt++;
                continue;
            }
            if(ar[i] - ar[i-1] == dif)
                cnt++;
            else { 
                res = max(res, cnt);
                cnt = 1;
                i--;
            }
        }
        res = max(res, cnt);
        cout << "Case #" << tr << ": " << res << "\n";
    }
}
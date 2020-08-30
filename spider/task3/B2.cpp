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
    // Considering all possible subsets. Works for m <= 22 aprx
    int n, m;
    lli res = 0;
    cin >> n >> m;
    vector <lli> ar(m);
    For(i, 0, m) cin >> ar[i];
    For(i, 0, (1 << m) + 1) {
        int te = i, cnt = 0;
        lli sum[2] = {0};
        while(cnt < m) {
            sum[te & 1] += ar[cnt];
            cnt++;
            te = te >> 1;
        }
        res = max(res, min(sum[0], sum[1]));
    }
    cout << res << endl;
}
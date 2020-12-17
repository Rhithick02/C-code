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
lli check(lli f, lli cnt0, lli cnt1, lli wei[]) {
    if(wei[0] < wei[1]) {
        if(wei[0] * cnt0 >= f) return f / wei[0];
        else return cnt0 + min(cnt1, (f - cnt0 * wei[0]) / wei[1]);
    }
    else {
        if(wei[1] * cnt1 >= f) return f / wei[1];
        else return cnt1 + min(cnt0, (f - cnt1 * wei[1]) / wei[0]);
    }
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli p, f, cnt[2] = {0}, wei[2] = {0}, res = 0;
        cin >> p >> f >> cnt[0] >> cnt[1] >> wei[0] >> wei[1];
        For(i, 0, cnt[0] + 1) {
            if(1LL * i * wei[0] > p) break;
            lli ca = min(cnt[1], (p - 1LL * i * wei[0] ) / wei[1]);
            res = max(res, i + ca + check(f, cnt[0] - i, cnt[1] - ca, wei));
        }
        cout << res << "\n";
    }
}
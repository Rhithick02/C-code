#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(lli i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int  n, c;
    lli res = 0;
    cin >> n;
    vector <lli> ar(n);
    For(i, 0, n) {
        cin >> ar[i];
        res += abs(ar[i] - 1);
    };
    sort(asc(ar));
    c = 100000 / n;
    For(i, 1, c + 1) {
        if(pow(i, n - 1) > 2e15) break;
        lli cnt = 0;
        For(j, 0, n) {
            cnt += abs(ar[j] - (lli)(pow(i, j)));
        }
        res = min(res, cnt);
    }
    cout << res << "\n";
}
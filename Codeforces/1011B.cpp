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
    int n, m, x, ans = 0;
    cin >> n >> m;
    map <int, int> mp, te;
    For(i, 0, m) {
        cin >> x;
        mp[x]++;
    }
    int low = 0, high = 100, mid;
    while(low <= high) {
        mid = low + high >> 1;
        if(!mid) {
            low = mid + 1;
            continue;
        }
        te = mp;
        int cnt = 0;
        for(auto it: te) {
            cnt += it.se / mid;
            te[it.fi] -= mid * cnt;
        }
        if(cnt < n) high = mid - 1;
        else {
            ans = mid;
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}
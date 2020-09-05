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
#define INF 1e15
int main(){
    ios::sync_with_stdio(false);
    lli n, p, t, c, m, cnt = 0, res = 0;
    deque <lli> chotu, motu, both;
    cin >> n >> p;
    For(i, 0, n) {
        cin >> t >> c >> m;
        if(c && m) both.pb(t);
        else if(c) chotu.pb(t);
        else if(m) motu.pb(t);
    }
    if(both.size() + chotu.size() < p || both.size() + motu.size() < p) {
        cout << -1 << endl;
        exit(0);
    }
    sort(asc(chotu)), sort(asc(motu)), sort(asc(both));
    both.pb(INF), chotu.pb(INF), motu.pb(INF);
    while(cnt < p) {
        if(chotu.front() + motu.front() < both.front()) {
            res += chotu.front() + motu.front();
            chotu.pop_front(), motu.pop_front();
        }
        else {
            res += both.front();
            both.pop_front();
        }
        cnt++;
    }
    cout << res << endl;
}
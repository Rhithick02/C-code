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
#define MAX 2000000000
int main(){
    ios::sync_with_stdio(false);
    lli n, m, d, cnt = 1;
    cin >> n >> m >> d;
    vector <lli> v(n);
    vector <pair<lli, lli>> ar(n);
    For(i, 0, n) {
        cin >> ar[i].fi;
        ar[i].se = i;
    }
    sort(asc(ar));
    For(i, 0, n) {
        if(v[ar[i].se]) continue;
        v[ar[i].se] = cnt;
        int pos = lower_bound(asc(ar), make_pair(ar[i].fi + d, 1LL*MAX)) - ar.begin();
        while(pos < n) {
            if(!v[ar[pos].se]) v[ar[pos].se] = cnt;
            else {
                pos++;
                continue;
            }
            pos = lower_bound(asc(ar), make_pair(ar[pos].fi + d, 1LL*MAX)) - ar.begin();
        }
        cnt++; 
    }
    cout << *max_element(asc(v)) << "\n";
    for(auto it: v) cout << it << " ";
}
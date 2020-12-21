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
#define inf 1000000000
int res[2] = {inf, 0};
void winning(vector <int> ab[]) {
    For(i, 0, 3) {
        int te = min(ab[0][i], ab[1][(i+1)%3]);
        ab[0][i] -= te, ab[1][(i+1)%3] -= te;
        res[1] += te;
    }
}
void loosing(vector <int> te[]) {
    vector <pair<int,int>> ar;
    For(i, 0, 3) {
        ar.pb({i, i});
        ar.pb({i, (i+2)%3});
    }
    do {
        vector <int> s[2];
        s[0] = te[0], s[1] = te[1];
        For(i, 0, 6) {
            int mini = min(s[0][ar[i].fi], s[1][ar[i].se]);
            s[0][ar[i].fi] -= mini, s[1][ar[i].se] -= mini;
        }
        int cnt = 0;
        For(i, 0, 3) cnt += s[0][i];
        res[0] = min(res[0], cnt);
    } while(next_permutation(asc(ar)));
}
int main(){
    ios::sync_with_stdio(false);
    int n, x;
    cin >> n;
    vector <int> ab[2], te[2];
    For(i, 0, 2) {
        For(j, 0, 3) {
            cin >> x;
            ab[i].pb(x);
            te[i].pb(x);
        }
    }
    winning(ab);
    loosing(te);
    cout << res[0] << " " << res[1] << "\n";
}
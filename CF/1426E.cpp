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
int res[2];
void winning(vector <int> ab[]) {
    For(i, 0, 3) {
        int te = min(ab[0][i], ab[1][(i+1)%3]);
        ab[0][i] -= te, ab[1][(i+1)%3] -= te;
        res[1] += te;
    }
}
void loosing(vector <int> te[]) {
    For(i, 0, 3) {
        int tem = min(te[0][i], te[1][(i+2)%3]);
        te[0][i] -= tem, te[1][(i+2)%3] -= tem;
    }
    For(i, 0, 3) {
        if(!te[0][i]) continue;
        if(te[1][i]) {
            int tem = min(te[0][i], te[1][i]);
            te[0][i] -= tem;
        }
        res[0] += te[0][i];
    }
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
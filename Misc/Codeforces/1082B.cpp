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
    int n, pos = 0, te = 0, res = 0;
    string s;
    vector<pair<int, int>> ar;
    cin >> n >> s;
    For(i, 0, n) {
        if(s[i] == 'G')
            te++;
        else { 
            if (te) ar.pb({pos, te});
            res = max(res, te);
            pos += te + 1;
            te = 0;
        }
    }
    if (te) {
        ar.pb({pos, te});
        res = te;
    }
    if (ar.size() <= 1)
        cout << res << "\n";
    else if (ar.size() == 2) {
        if (ar[1].fi - ar[0].fi - ar[0].se == 1)
            cout << ar[0].se + ar[1].se << "\n";
        else 
            cout << max(ar[0].se, ar[1].se) + 1 << "\n";
    }
    else {
        For(i, 0, ar.size()){
            if (i < ar.size() - 1 && (ar[i+1].fi - ar[i].fi - ar[i].se == 1))
                res = max(res, ar[i].se + ar[i+1].se + 1);
            else 
                res = max(res, ar[i].se + 1);
        }
        cout << res << "\n";
    }
}
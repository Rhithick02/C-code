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
    int t;
    cin >> t;
    while(t--) {
        int n, track = 0, flip = 0;
        string a, b;
        cin >> n >> a >> b;
        vector <int> res;
        for(int i = n - 1; i >= 0; i--) {
            if(flip ^ (a[track] == b[i]))
                res.pb(1);
            res.pb(i + 1);
            if(flip) track -= i;
            else track += i;
            flip ^= 1;
        }
        cout << res.size() << " ";
        for(auto it: res) cout << it << " ";
        cout << "\n";
    }
}
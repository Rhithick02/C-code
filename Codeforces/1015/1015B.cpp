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
    int n;
    string s, t;
    cin >> n >> s >> t;
    vector <int> res;
    string te1 = s, te2 = t;
    sort(asc(te1)), sort(asc(te2));
    if(te1 != te2) {
        cout << "-1\n";
        exit(0);
    }
    For(i, 0, n) {
        if(t[i] == s[i]) continue;
        For(j, 0, n) {
            if(t[i] != s[j] || t[j] == s[j]) continue;
            for(int k = j; k > i; k--) {
                res.pb(k);
                swap(s[k], s[k - 1]);
            }
            break;
        }
    }
    cout << res.size() << endl;
    for(auto it: res) cout << it << " ";
}
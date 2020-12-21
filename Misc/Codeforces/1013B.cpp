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
    int n, x;
    cin >> n >> x;
    bool ok = false;
    vector <int> ar(n);
    map <int, int> mp[2];
    For(i, 0, n) {
        cin >> ar[i];
        mp[0][ar[i]]++;
    }
    for(auto it: mp[0]) if(it.se > 1) ok = true;
    if(ok) {
        cout << "0\n";
        exit(0);
    }
    For(i, 0, n) {
        if(((ar[i] & x) != ar[i] && mp[0][ar[i] & x] > 0) || mp[0][ar[i] & x] > 1)
            ok = true;
        mp[1][ar[i] & x]++;
    }
    if(ok) {
        cout << "1\n";
        exit(0);
    }
    for(auto it: mp[1]) if(it.se > 1) ok = true;
    if(ok) {
        cout << "2\n";
        exit(0);
    }
    else cout << "-1\n";
}
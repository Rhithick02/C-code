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
    lli cnt = 0;
    int n, m, val = 0;
    bool num = false;
    cin >> n >> m;
    vector <int> ar(n);
    map <int, int> mp;
    mp[0] = 1;
    For(i, 0, n) cin >> ar[i];
    For(i, 0, n) {
        if(ar[i] < m) val--;
        else if(ar[i] > m) val++;
        else num = true;
        if(!num) mp[val]++;
        else cnt += mp[val] + mp[val-1];
    }
    cout << cnt << "\n";
}
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
    lli sum = 0;
    int n, cnt = 0;
    cin >> n;
    vector <lli> ar(n);
    map <lli, lli> mp;
    For(i, 0, n) cin >> ar[i];
    mp[sum]++;
    For(i, 0, n) {
        sum += ar[i];
        if(mp[sum]) {
            cnt++;
            mp.clear();
            mp[0]++, mp[ar[i]]++;
            sum = ar[i];
            continue;
        }
        mp[sum]++;
    }
    cout << cnt << "\n";
}
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
    lli res = 1;
    lli n, cnt = 0;
    cin >> n;
    map <lli,lli> mp;
    vector <lli> ar(n), st(35);
    For(i, 0, 32) {
        st[i] = res;
        res *= 2;
    }
    For(i, 0, n) {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    For(i, 0, n) {
        int fl = 0;
        For(j, 0, 32) {
            if(st[j] < ar[i]) continue;
            if(st[j]-ar[i] == ar[i]) {
                if(mp[ar[i]] >= 2) fl = 1;
            }
            else if(mp.count(st[j]-ar[i])) fl = 1;
        }
        if(!fl) cnt++;
    }
    cout << cnt << "\n";
}
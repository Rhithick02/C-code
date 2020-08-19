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
    int n, cnt = 0;
    string a, b;
    cin >> n >> a >> b;
    For(i, 0, (n +1) / 2){
        if(i == n-1-i) {
            if(a[i] != b[i]) cnt++;
            break;
        }
        map <char, int> mp;
        int fl = 0;
        mp[a[i]]++, mp[a[n-1-i]]++;
        mp[b[i]]++, mp[b[n-1-i]]++;
        for(auto it: mp) {
            if(it.se == 2) fl++;
        }
        if(fl == 2) continue;
        if(i == 1) cout << "here";
        if(a[i] != b[i] && a[i] != b[n-1-i]) {
            if(a[n-1-i] != b[i] && a[n-1-i] != b[n-1-i])
                cnt += 2;
            else cnt += 1;
        }
        else if(a[i] == b[i]) {
            if(a[n-1-i] != b[n-1-i])
                cnt += 1;
        }
        else {
            if(a[n-1-i] != b[i])
                cnt += 1;
        }
    }
    cout << cnt << "\n";
}
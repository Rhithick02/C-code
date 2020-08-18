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
    int n, m, pos;
    cin >> n >> m;
    vector <int> ar(n), pref(n+1);
    For(i, 0, n) {
        cin >> ar[i];
        if(ar[i] ==  m) pos = i + 1;
        else if(ar[i] > m) pref[i+1] = 1;
        else pref[i+1] = -1;
    }
    For(i, 1, n+1) {
        pref[i] += pref[i-1];
    }
    For(i, pos, n+1) {
        For(j, 0, pos) {
            if((i - j) & 1) {
                if(pref[i] - pref[j] == 0)
                    cnt++;
            }
            else {
                if(pref[i] - pref[j] == 1)
                    cnt++;
            }
        }
    }
    cout << cnt << "\n";
}
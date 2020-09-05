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
        string s;
        cin >> s;
        int n, cnt[3] = {0}, odd = 0, even = 0;
        n = s.length();
        For(i, 0, n) cnt[s[i] - 'a']++;
        if(cnt[0] == n || cnt[1] == n || cnt[2] == n) {
            cout << n << "\n";
            continue;
        }
        For(i, 0, 3) {
            if(cnt[i] & 1) odd++;
            else even++;
        }
        if(even == 3 || odd == 3) cout << 2 << "\n";
        else cout << 1 << "\n";
    }
}
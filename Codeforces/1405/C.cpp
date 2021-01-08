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
        int n, k;
        string s;
        bool ok = true;
        cin >> n >> k >> s;
        For(i, 0, k) {
            int cnt[3] = {0};
            for(int j = i; j < n; j += k) {
                if(s[j] == '?') cnt[2]++;
                else cnt[s[j] - '0']++;
            }
            if(cnt[0] && cnt[1]) {
                ok = false;
                break;
            }
            if(s[i] == '?') {
                if(cnt[0]) s[i] = '0';
                else if(cnt[1]) s[i] = '1';
            }
        }
        int cnt[2] = {0};
        For(i, 0, k) {
            if(s[i] == '?') continue;
            cnt[s[i] - '0']++;
        }
        if(cnt[0] > k / 2 || cnt[1] > k / 2) ok = false;
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
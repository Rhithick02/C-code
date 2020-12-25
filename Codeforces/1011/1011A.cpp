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
    int n, k, res = 0, cnt = 0;
    string s;
    vector <int> alp(26);
    cin >> n >> k >> s;
    For(i, 0, n) alp[s[i] - 'a']++;
    For(i, 0, 26) {
        if(alp[i]) {
            res += ++i;
            cnt++;
        }
        if(cnt == k) break;
    }
    if(cnt < k) cout << "-1\n";
    else cout << res << endl;
}
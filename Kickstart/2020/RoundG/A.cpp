#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        lli res = 0;
        int n;
        string s, te1 = "KICK", te2 = "START";
        cin >> s;
        n = s.length();
        vector <int> kick, start;
        for(int i=0, j=0; i < n; i++) {
            if(s[i] != te1[j]) j = 0;
            if(s[i] == te1[j])
                j++;
            if(j == 4) {
                kick.pb(i-3);
                j = 0, i--;
            }
        }
        for(int i=0, j=0; i < n; i++) {
            if(s[i] != te2[j]) j = 0;
            if(s[i] == te2[j])
                j++;
            if(j == 5) {
                start.pb(i-4);
                j = 0;
            }
        }
        For(i, 0, kick.size()) {
            int pos = lower_bound(asc(start), kick[i]) - start.begin();
            res += (lli)start.size() - 1LL * pos;
        }
        cout << "Case #" << T - t << ": " << res << "\n";
    }
}
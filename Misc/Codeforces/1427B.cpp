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
    int t;
    cin >> t;
    while(t--) {
        int n, k, score = 0, prev = -1, fl;
        string s;
        cin >> n >> k >> s;
        vector <pair <int, int>> st;
        fl = n;
        For(i, 0, n) {
            if(s[i] == 'W') {
                if(prev == -1) fl = prev = i;
                else {
                    st.pb({i - prev - 1, prev});
                    prev = i;
                }
            }
        }
        sort(asc(st));
        for(int i = 0; i < st.size() && k; i++) {
            for(int j = 1; j <= st[i].fi && k; j++, k--)
                s[st[i].se + j] = 'W';
        }
        while(k && fl) {
            s[--fl] = 'W';
            k--;
        }
        while(k && (prev != n-1)) {
            s[++prev] = 'W';
            k--;
        }
        For(i, 0, n) {
            if(s[i] == 'W') {
                if(i && s[i-1] == 'W') score += 2;
                else score ++;
            }
        }
        cout << score << "\n";
    }
}
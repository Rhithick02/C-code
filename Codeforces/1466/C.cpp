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
        int cnt = 0, n;
        string s;
        cin >> s;
        n = s.length();
        vector <bool> change(n, false);
        For(i, 0, n-1) {
            if(s[i] == s[i+1] && !change[i+1] && !change[i]) {
                change[i+1] = true;
                cnt++;
            }
            if(i+2 < n && s[i] == s[i+2] && !change[i+2] && !change[i]) {
                change[i+2] = true;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}
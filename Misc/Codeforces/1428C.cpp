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
        int n, cnt = 0, fl = 0, b = 0;
        string s;
        cin >> s;
        n = s.length();
        for(int i = n-1; i >= 0; i--) {
            if(s[i] == 'B') fl = 1;
            if(!fl) {
                cnt++;
                continue;
            }
            if(s[i] == 'B') b++;
            else {
                if(b) b--;
                else cnt++;
            }
        }
        if(b & 1) cnt++;
        cout << cnt << "\n";
    }
}
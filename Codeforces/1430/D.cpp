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
        bool ok = false;
        int n, cnt = 1, score = 0, cur = 0;
        string s;
        cin >> n >> s;
        vector <int> ar;
        For(i, 0, n - 1) {
            if(s[i] == s[i+1])
                cnt++;
            else {
                ar.pb(cnt);
                cnt = 1;
            }
        }
        ar.pb(cnt);
        n = ar.size();
        For(i, 0, n) {
            if(cur < i) cur = i;
            score++;
            while(!ok && cur < n && ar[cur] == 1) cur++;
            if(cur == n) {
                cur = i;
                ok = true;
            }
            ar[cur]--;
            if(!ar[cur]) i++;
        }
        cout << score << "\n";
    }
}
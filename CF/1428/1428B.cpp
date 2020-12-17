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
        int n, lt = 0, gt = 0, e = 0, cnt = 0;
        string s;
        cin >> n >> s;
        vector <int> st(n);
        For(i, 0, n) {
            if(s[i] == '>') gt++;
            else if(s[i] == '<') lt++;
            else {
                e++;
                st[i] = 1;
                st[(i+1)%n] = 1;
            }
        }
        if(!lt || !gt) {
            cout << n << "\n";
        } else if(!e) {
            cout << "0\n";
        } else {
            For(i, 0, n) if(st[i]) cnt++;
            cout << cnt << "\n";
        }
    }
}
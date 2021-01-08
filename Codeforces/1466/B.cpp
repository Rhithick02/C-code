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
#define MAX 2000010
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0;
        cin >> n;
        vector <int> ar(n), st(2*n+5);
        For(i, 0, n) {
            cin >> ar[i];
            st[ar[i]]++;
        }
        for(int i = 2*n+2; i >= 1; i--) {
            if(st[i] && !st[i+1]) {
                st[i]--;
                st[i+1]++;
            }
        }
        For(i, 0, 2*n+5) {
            if(st[i]) cnt++;
        }
        cout << cnt << "\n";
    }
}
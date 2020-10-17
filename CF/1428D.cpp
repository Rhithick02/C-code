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
    bool ok = true;
    int n, cur_row = 0, cur_col = 0;
    cin >> n;
    vector <int> ar(n), row(n), col(n);
    vector <pair<int, int>> st;
    For(i, 0, n) {
        cin >> ar[i];
        if(!ar[i]) continue;
        if(ar[i] == 3) {
            st.pb({cur_row, i});
        }
        if(ar[i] == 1) {
            st.pb({cur_row++, i});
            if(cur_row > n || col[i] == 2) {
                ok = false;
                break;
            }
        } else if(ar[i] == 2) {
            while (cur_row >= 0 && row[cur_row] != -1) 
                cur_row--;
        } else {
            st.pb({cur_row, i});
            st.pb({cur_row, cur_col});
        }
    }
}
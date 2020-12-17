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
        int n, cnt = 0;
        cin >> n;
        vector <string> st;
        For(i, 0, n) {
            string s;
            cin >> s;
            st.pb(s);
        }
        if((st[0][1] == st[1][0]) && (st[n-1][n-2] == st[n-2][n-1]) && (st[0][1] != st[n-1][n-2]))
            cout << "0\n";
        else if((st[0][1] == st[1][0]) && (st[n-1][n-2] == st[n-2][n-1]) && (st[0][1] == st[n-1][n-2]))
            cout << "2\n1 2\n2 1\n";
        else if(st[0][1] != st[1][0] && st[n-1][n-2] != st[n-2][n-1]) {
            cout << "2\n";
            if(st[0][1] == st[n-2][n-1]) cout << "1 2\n" << n << " " << n-1 << "\n";
            else cout << "1 2\n" << n-1 << " " << n << "\n";
        }
        else if(st[0][1] != st[1][0]) {
            cout << "1\n";
            if(st[0][1] == st[n-1][n-2]) cout << "1 2\n";
            else cout << "2 1\n";
        }
        else {
            cout << "1\n";
            if(st[0][1] == st[n-1][n-2]) cout << n << " " << n-1 << "\n";
            else cout << n - 1 << " " << n << "\n";
        }
    }
}
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
        int n, three = 0, five = 0, seven = 0;
        cin >> n;
        three = n / 3;
        n -= 3 * three;
        if(n % 3 == 0) {
            cout << three << " 0 0";
        } else if(n % 3 == 2) {
            if(three >= 1) cout << three - 1 << " 1 0";
            else cout << "-1";
        } else {
            if(three >= 2) cout << three - 2 << " 0 1";
            else cout << "-1";
        }
        cout << "\n";
    }
}
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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli x, y, num = 0;
        cin >> x >> y;
        if(x > y) {
            if(x & 1) {
                x--;
                num = x * x;
                num += y;
            } else {
                num = x * x;
                num -= y - 1;
            }
        } else {
            if(y & 1) {
                num = y * y;
                num -= x - 1;
            } else {
                y--;
                num = y * y;
                num += x;
            }
        }
        cout << num << "\n";
    }
}
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
    lli n, sum;
    cin >> n;
    sum = n * (n+1) / 2;
    if(sum & 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        lli ref_sum = 0;
        vector <int> set1, set2;
        vector <bool> v(n+1);
        For(i, 0, n) {
            if(ref_sum+n-i <= sum / 2) {
                ref_sum += n-i;
                v[n-i] = true;
                set1.pb(n-i);
            }
        }
        For(i, 1, n+1)
            if(!v[i]) set2.pb(i);
        cout << set1.size() << "\n";
        for(auto it: set1)
            cout << it << " ";
        cout << "\n";
        cout << set2.size() << "\n";
        for(auto it: set2)
            cout << it << " ";
    }
}
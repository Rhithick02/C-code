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
    int n;
    cin >> n;
    if(n == 1) cout << "1\n";
    else if(n < 4) cout << "NO SOLUTION\n";
    else {
        deque <int> ar;
        ar.pb(2), ar.pb(4), ar.pb(1), ar.pb(3);
        For(i, 0, n-4)  {
            if(i & 1) ar.pb(i + 5);
            else ar.push_front(i + 5);
        }
        for(auto it: ar) cout << it << " ";
    }
}
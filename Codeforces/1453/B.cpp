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
        lli sum = 0, res;
        int n;
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        For(i, 1, n) sum += abs(ar[i]-ar[i-1]);
        res =  min(sum-abs(ar[1]-ar[0]), sum-abs(ar[n-1]-ar[n-2]));
        For(i, 1, n-1) {
            lli te = sum;
            te -= abs(ar[i]-ar[i-1])+abs(ar[i+1]-ar[i])-abs(ar[i+1]-ar[i-1]);
            res = min(res, te);
        }
        cout << res << "\n";
    }
}
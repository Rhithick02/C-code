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


int main() {
   ios::sync_with_stdio(false);
   int t;
   cin >> t;
   while(t--) {
       int n, cnt = 0;
       cin >> n;
       vector <int> ar(n), res;
       For(i, 0, n) cin >> ar[i];
       res.pb(ar[0]);
       For(i, 1, n) {
           if(ar[i] > 2 * res.back()) {
               while(ar[i] > 2 * res.back()) {
                   res.pb(2 * res.back());
                   cnt++;
               }
           } else if(2 * ar[i] < res.back()) {
               while(2 * ar[i] < res.back()) {
                   res.pb((res.back() + 1) / 2);
                   cnt++;
               }
           }
           res.pb(ar[i]);
       }
       cout << cnt << "\n";
   }
}
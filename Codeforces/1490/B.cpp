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
       int n, rem[3] = {0, 0, 0}, bal, cnt = 0;
       cin >> n;
       bal = n / 3;
       vector <int> ar(n);
       For(i, 0, n) {
           cin >> ar[i];
           rem[ar[i] % 3]++;
       }
       if(rem[0] < bal && rem[1] >= bal && rem[2] >= bal) {
           cnt = 2 * (rem[1] - bal) + (rem[2] - bal);
       } else if(rem[0] >= bal && rem[1] < bal && rem[2] >= bal) {
           cnt = 2 * (rem[2] - bal) + (rem[0] - bal);
       } else if(rem[0] >= bal && rem[1] >= bal && rem[2] < bal) {
           cnt = 2 * (rem[0] - bal) + (rem[1] - bal);
       } else if(rem[0] < bal && rem[1] < bal && rem[2] >= bal) {
           cnt = (bal - rem[0]) + 2 * (bal - rem[1]);
       } else if(rem[0] < bal && rem[1] >= bal && rem[2] < bal) {
           cnt = (bal - rem[2]) + 2 * (bal - rem[0]);
       } else {
           cnt = (bal - rem[1]) + 2 * (bal - rem[2]);
       }
       cout << cnt << "\n";
   }
}
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
#define MAX 10001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool can(lli x) {
    lli low = 0, high = 1e4, mid, ans = 0;
    while(low <= high) {
        mid = low + high >> 1;
        if(mid * mid * mid <= x) {
            low = mid + 1;
            ans = max(ans, mid);
        } else {
            high = mid - 1;
        }
    }
    if(ans * ans * ans == x) {
        return true;
    }
    return false;
}
int main() {
   ios::sync_with_stdio(false);
   int t;
   cin >> t;
   while(t--) {
       bool ok = false;
       lli n;
       cin >> n;
       For(i, 1, MAX) {
           lli rem = n - 1ll * i * i * i;
           if(rem <= 0) break;
           if(can(rem)) {
               cout << "YES\n";
               ok = true;
               break;
           }
       }
       if(!ok) {
           cout << "NO\n";
       }
   }
}
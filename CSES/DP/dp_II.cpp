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
#define MAX 1000001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int n, x;
    cin >> n >> x;
    int ar[n], dp[MAX];
    for(int i = 0; i < MAX; i++) dp[i] = mod;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    dp[0] = 0;
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(i - ar[j] < 0) continue;
            dp[i] = min(dp[i], 1 + dp[i - ar[j]]);
        }
    }
    cout << (dp[x] == mod ? -1 : dp[x]);
}
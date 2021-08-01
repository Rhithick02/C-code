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

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <long long> ar(n), l_sum(n), r_sum(n);
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        long long sum = 0, ans = -1e17;
        for(int i = 0; i < n; i++) {
            sum = sum + ar[i];
            l_sum[i] = sum;
            ans = max(ans, sum);
            if(sum < 0) sum = 0;
        }
        sum = 0;
        for(int i = n-1; i >= 0; i--) {
            sum = sum + ar[i];
            r_sum[i] = sum;
            if(sum < 0) sum = 0;
        }
        for(int i = 1; i < n-1; i++) {
            ans = max(ans, l_sum[i-1] + r_sum[i+1]);
        }
        cout << ans << endl;
    }
}
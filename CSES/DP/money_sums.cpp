#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int n, k = 0;
    cin >> n;
    vector <int> dp(MAX, 0), ar(n);
    dp[0] = 1;
    for(int i = 0, x; i < n; i++) {
        cin >> x;
        vector <int> temp;
        for(int j = 0; j < MAX; j++) {
            if(!dp[j]) continue;
            temp.pb(j+x);
        }
        for(auto it: temp) {
            dp[it]++;
        }
    }
    for(int i = 1; i < MAX; i++) {
        if(dp[i]) k++;
    }
    cout << k << endl;
    for(int i = 1; i < MAX; i++) {
        if(dp[i]) {
            cout << i << " ";
        }
    }
}
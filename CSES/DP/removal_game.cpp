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
    int n;
    cin >> n;
    vector <int> ar(n);
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    vector <vector<lli>> dp(n, vector <lli> (n, 0));
    for(int width = 0; width < n; width++) {
        for(int i = 0, j = width; j < n; j++, i++) {
            if(width <= 1) {
                dp[i][j] = max(ar[i], ar[j]);
            } else {
                dp[i][j] = max(ar[i] + min(dp[i+1][j-1], dp[i+2][j]), 
                                ar[j] + min(dp[i+1][j-1], dp[i][j-2]));
            }
        }
    }
    cout << dp[0][n-1] << endl;
}
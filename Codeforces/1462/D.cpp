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
        int n, sum = 0;
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) {
            cin >> ar[i];
            sum += ar[i];
        }
        for(int i = n; i >= 1; i--) {
            if(sum % i) continue;
            bool ok = true;
            int temp = sum / i;
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                cnt += ar[j];
                if(cnt > temp) {
                    ok = false;
                    break;
                } else if(cnt == temp) {
                    cnt = 0;
                }
            }
            if(ok) {
                cout << n - i << "\n";
                break;
            }
        }
    }
}
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
        vector <lli> ar(n), score(n);
        for(auto &it: ar) cin >> it;
        for(int i = n - 1; i >= 0; i--) {
            if(i + ar[i] >= n) {
                score[i] = ar[i];
            } else {
                score[i] = ar[i] + score[i+ar[i]];
            }
        }
        cout << *max_element(asc(score)) << "\n";
    }
}
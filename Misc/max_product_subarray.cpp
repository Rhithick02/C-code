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
    int n, max_ending_here = 1, min_ending_here = 1, max_so_far = 0;
    cin >> n;
    vector <int> ar(n);
    for(auto &it: ar) cin >> it;
    for(int i = 0; i < n; i++) {
        if(ar[i] > 0) {
            max_ending_here *= ar[i];
            min_ending_here = min(min_ending_here * ar[i], 1);
        } else if(ar[i] == 0) {
            max_ending_here = 1;
            min_ending_here = 1;
        } else {
            int temp = max_ending_here;
            max_ending_here = max(min_ending_here * ar[i], 1);
            min_ending_here = temp * ar[i];
        }
        max_so_far = max(max_so_far, max_ending_here);
    }
    cout << max_so_far << endl;
}
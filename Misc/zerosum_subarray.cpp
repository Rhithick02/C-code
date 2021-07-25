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
    int n, tr = 0;
    cin >> n;
    vector <int> ar(n);
    for(auto &it: ar) cin >> it;
    map <int, int> mp;
    mp[0] = 1;
    for(int i = 0; i < n; i++) {
        tr += ar[i];
        if(mp[tr]) {
            cout << i << " ";
        }
        mp[tr]++;
    }
}
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
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

int main(){
    ios::sync_with_stdio(false);
    int x, n, val;
    cin >> x >> n;
    set <int> track, maxi;
    map <int, int> mp;
    track.insert(0), track.insert(x), maxi.insert(x);
    mp[x]++;
    For(i, 0, n) {
        cin >> val;
        auto right = track.upper_bound(val);
        auto left = prev(right); 
        track.insert(val);
        maxi.insert(*right - val);
        maxi.insert(val - *left);
        mp[*right-val]++;
        mp[val-*left]++;
        mp[*right-*left]--;
        if(!mp[*right-*left])
            maxi.erase(*right - *left);
        cout << *maxi.rbegin() << " ";
    }
    cout << endl;
}
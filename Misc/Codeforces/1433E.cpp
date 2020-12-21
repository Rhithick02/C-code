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
    int n;
    cin >> n;
    vector <lli> ar(n + 1);
    ar[0] = 1;
    For(i, 1, n + 1) ar[i] = 1LL * ar[i-1] * i;
    cout << (ar[n] / (ar[n/2] * ar[n/2])) * (ar[n/2-1] * ar[n/2-1]) / 2 << "\n";
}
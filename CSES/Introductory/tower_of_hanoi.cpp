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

void hanoi(int n, char from, char to, char aux) {
    if(n == 1) cout << from << " " << to << "\n";
    else {
        hanoi(n - 1, from, aux, to);
        cout << from << " " << to << "\n";
        hanoi(n - 1, aux, to, from);
    }
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    hanoi(n, '1', '3', '2');
}
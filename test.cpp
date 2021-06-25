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
    string s = "021";
    cout << char('0' + 1) << endl;
    set <int> te;
    for(int i = 0; i < 5; i++)
        te.insert(i+1);
    auto it = te.begin();
    auto ed = te.lower_bound(3);
    for(; it != ed; it++) {
        cout << *it << " ";
        te.erase(it);
    }
}
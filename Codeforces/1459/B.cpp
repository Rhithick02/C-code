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
int n;
// set <pair <int, int>> te;
// void calc(int x, int y, int fl, int cnt) {
//     if(cnt == n) {
//         te.insert({x, y});
//         return;
//     }
//     if(fl) {
//         calc(x+1, y, fl ^ 1, cnt + 1);
//         calc(x-1, y, fl ^ 1, cnt + 1);
//     } else {
//         calc(x, y+1, fl ^ 1, cnt + 1);
//         calc(x, y-1, fl ^ 1, cnt + 1);
//     }
// }
int main() {
    cin >> n;
    if(n <= 2) {
        cout << "4\n";
    } else if(n % 2 == 0) {
        int a = 4, d = 5;
        for(int i = 4; i <= n; i += 2) {
            a += d;
            d += 2;
        }
        cout << a << "\n";
    } else {
        int a = 3, d = 3;
        for(int i = 3 ; i < n; i += 2) {
            a += 2;
            d ++;
        }
        cout << a * d + d << "\n";
    }
    // calc(0, 0, 0, 0);
    // calc(0, 0, 1, 0);
    // cout << te.size() << "\n";
}
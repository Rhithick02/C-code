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
        int n, cnt[2] = {0};
        cin >> n;
        string red, blue;
        cin >> red >> blue;
        for(int i = 0; i < n; i++) {
            if(red[i] > blue[i]) {
                cnt[0]++;
            } else if(red[i] < blue[i]) {
                cnt[1]++;
            }
        }
        if(cnt[0] > cnt[1]) {
            cout << "RED\n";
        } else if(cnt[0] < cnt[1]) {
            cout << "BLUE\n";
        } else {
            cout << "EQUAL\n";
        }
    }
}
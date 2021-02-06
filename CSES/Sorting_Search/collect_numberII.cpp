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
    int n, m, x, cnt = 1, prev = 0, a, b;
    cin >> n >> m;
    vector <int> ar(n), st(100001);
    For(i, 0, n) {
        cin >> ar[i];
        st[ar[i]] = i+1;
    }
    For(i, 1, 100001) {
        if(prev > st[i]) {
            continue;
        } else if(st[i] > prev + 1) {
            cnt++;
        }
        prev = st[i];
    }
    For(i, 0, m) {
        cin >> a >> b;
        int prev_loc_ind_b = st[ar[b-1]];
        int loc_ind_next_b = st[ar[b-1]+1];
        int loc_ind_prev_b = st[ar[b-1]-1];
        swap(st[ar[b-1]], st[ar[a-1]]);
        int new_loc_ind_b = st[ar[b-1]];
        swap(ar[b-1], ar[a-1]);
        if((prev_loc_ind_b < loc_ind_next_b && new_loc_ind_b > loc_ind_next_b) ||
            (prev_loc_ind_b > loc_ind_prev_b && new_loc_ind_b < loc_ind_prev_b)) {
            cnt++;
        } else if((prev_loc_ind_b > loc_ind_next_b && new_loc_ind_b < loc_ind_next_b) ||
            (prev_loc_ind_b < loc_ind_prev_b && new_loc_ind_b > loc_ind_prev_b)) {
            cnt--;
        }
        cout << cnt << "\n";
    }
}
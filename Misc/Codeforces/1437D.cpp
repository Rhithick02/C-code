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

int height = 0;
void dfs(vector <int> to[], int start, int level) {
    height = max(height, level);
    for(auto it : to[start]) {
        dfs(to, it, level+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        height = 0;
        vector <int> ar(n), to[n+1];
        queue <int> q;
        For(i, 0, n) cin >> ar[i];
        q.push(ar[0]);
        For(i, 1, n) {
            int cur = q.front();
            q.pop();
            to[cur].pb(ar[i]);
            q.push(ar[i]);
            For(j, i+1, n) {
                if(ar[j] > ar[j-1]) {
                    to[cur].pb(ar[j]);
                    q.push(ar[j]);
                    if(j == n-1)
                        i = n-1;
                } else {
                    i = j-1;
                    break;
                }
            }
        }
        dfs(to, 1, 0);
        cout << height << "\n";
    }
}
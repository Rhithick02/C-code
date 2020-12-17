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

void all_one(vector <pair<int, int>> st[], vector<pair<int, int>> &te) {
    st[0].pb(te[0]), st[1].pb(te[1]), st[2].pb(te[2]);
    st[0].pb(te[0]), st[1].pb(te[1]), st[2].pb(te[3]);
    st[0].pb(te[1]), st[1].pb(te[2]), st[2].pb(te[3]);
    st[0].pb(te[0]), st[1].pb(te[2]), st[2].pb(te[3]);
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector <string> ar(n);
        vector <pair<int, int>> st[3];
        string s;
        For(i, 0, n) {
            cin >> s;
            ar[i] = s;
        }
        for(int i = 0; i < n;) {
            for(int j = 0; j < m;) {
                vector <pair<int, int>> te;
                vector <pair<int, int>> tee;
                For(x, 0, 2) {
                    For(y, 0, 2) {
                        if(ar[i+x][j+y] == '1') te.pb({x+i+1, y+j+1});
                        else tee.pb({x+i+1, y+j+1});
                        ar[i+x][j+y] = '0';
                    }
                }
                if(te.size() == 4) {
                    all_one(st, te);
                } else if(te.size() == 3) {
                    st[0].pb(te[0]), st[1].pb(te[1]), st[2].pb(te[2]);
                } else if(te.size() == 2) {
                    st[0].pb(te[0]), st[1].pb(tee[1]), st[2].pb(tee[0]);
                    st[0].pb(te[1]), st[1].pb(tee[1]), st[2].pb(tee[0]);
                } else if(te.size() == 1) {
                    For(t, 0, 3) {
                        st[t].pb(tee[t]);
                        te.pb(tee[t]);
                    }
                    all_one(st, te);
                }
                
                if(j+2 == m-1) j++;
                else j += 2;
            }
            if(i+2 == n-1) i++;
            else i += 2;
        }
        cout << st[0].size() << "\n";
        For(j, 0, (int)st[0].size()) {
            For(i, 0, 3) {
                cout << st[i][j].fi << " " << st[i][j].se << " ";
            }
            cout << "\n";
        }
    }
}
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
    int t;
    cin >> t;
    while(t--) {
        int n, l, sr = 1, sl = 1, fl = -1;
        double tl = 0, tr = 0;
        cin >> n >> l;
        vector <int> ar(n+1), sil(n+2), sir(n+2);
        ar[0] = 0;
        vector <double> til(n+2), tir(n+2);
        For(i, 1, n+1) cin >> ar[i];
        ar.pb(l), sil[0] = sir[n+1] = 1;
        For(i, 1, n+2) {
            til[i] = til[i-1] + 1.0 * (ar[i]-ar[i-1]) / sl;
            sil[i] = ++sl;
        }
        For(i, 1, n+2) {
            tir[n+1-i] = tir[n+2-i] + 1.0 * (ar[n+2-i]-ar[n+1-i]) / sr;
            sir[n+1-i] = ++sr;
        }
        For(i, 0, n+2) {
            if(til[i] == tir[i]) {
                cout << std::fixed << std::setprecision(7) << til[i] << "\n";
                break;
            } else if(til[i] > tir[i]) {
                fl = i - 1;
                double offset = (tir[fl+1] - til[fl]) * sil[fl];
                cout << std::fixed << std::setprecision(7);
                cout << tir[fl+1] + (ar[fl+1] - ar[fl] - offset) / (sir[fl+1] + sil[fl]) << "\n";
                break;
            }
        }
    }
}
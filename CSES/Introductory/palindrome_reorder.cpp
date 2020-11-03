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
    string s;
    cin >> s;
    int n = s.length(), fl = 0;
    vector <int> alp(26);
    For(i, 0, n) alp[s[i]-'A']++;
    For(i, 0, 26) {
        if(alp[i] & 1)
            fl++;
    }
    if(fl > 1) {
        cout << "NO SOLUTION\n";
    } else {
        char te = 'a';
        string res = "";
        For(i, 0, 26) {
            For(j, 0, alp[i] / 2) {
                res += 'A' + i;
            }
            if(alp[i] & 1) te = 'A' + i;
        }
        string fin = res;
        if(te != 'a') fin += te;
        reverse(asc(res));
        fin += res;
        cout << fin << "\n";
    }
}
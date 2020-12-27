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

lli power(lli x, lli y) {
    lli res = 1;
    while(y > 0) {
        if(y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli n, rem, te;
        vector <lli> temp(22), raz, gene;
        cin >> n;
        do {
            lli qu = -1;
            te = n;
            while(te) {
                te /= 3;
                qu++;
            }
            rem = n - power(3, qu);
            temp[qu]++;
            n = rem;
        } while(rem != 0);
        n = temp.size();
        For(i, 0, 21) {
            if(!temp[i]) continue;
            if(temp[i] == 1) gene.pb(i);
            else if(temp[i] == 2) {
                temp[i] = 0;
                temp[i+1]++;
                raz.pb(i);
            } else {
                temp[i] = 0;
                temp[i+1]++;
            }
        }
        for(auto it: gene) cout << it << " ";
        cout << "\n";
        for(auto it: raz) cout << it << " ";
        cout << "\n";
    }
}
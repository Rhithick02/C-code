#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(lli i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

void divisors(lli k, vector <lli> &ar){
    For(i, 1, (int)sqrt(k) + 1){
        if(k % i != 0)  continue;
        ar.pb(i);
        if(i != k / i) ar.pb(k / i);
    }
    sort(asc(ar));
}

int main(){
    ios::sync_with_stdio(false);
    lli n, maxi = 0;
    cin >> n;
    vector <lli> ar;
    divisors(n, ar);
    for(int i = ar.size() - 1; i > 0; i--) {
        bool ok = true;
        for(int j = 1; j < ar.size(); j++) {
            if(ar[i] % (1LL * (ar[j] * ar[j])) == 0)
                ok = false;
        }
        if(ok) {
            cout << ar[i] << endl;
            return 0;
        }
    }
}
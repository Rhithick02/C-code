#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, x, fl = 0, sum = 0;
        cin >> n >> x;
        vector <int> ar(n);
        For(i, 0, n) {
            cin >> ar[i];
            if(ar[i] != x) fl++;
            sum += x - ar[i];
        }
        if(!fl) cout << "0\n";
        else if(fl != n || !sum) cout << "1\n";
        else cout << "2\n";
    }
}
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
    int n, m, l, r, fl = 0;
    cin >> n >> m;
    string res(n, ' ');
    For(i, 0, m)
        cin >> l >> r;
    For(i, 0, n){
        res[i] = fl + '0';
        fl ^= 1;
    }
    cout << res << "\n";
}
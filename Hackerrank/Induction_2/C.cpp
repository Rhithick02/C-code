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
    int n, cnt = 0;
    cin >> n;
    vector <bool> vi(n + 1);
    vector <int> ar(n);
    For(i, 0, n) {
        cin >> ar[i];
        vi[ar[i]] = true;
        bool ok = true;
        For(j, 2, (int)sqrt(ar[i])+1){
            if(ar[i] % j != 0)  continue;
            while(ar[i] % j == 0) ar[i] /= j;
            if(!vi[j]) ok = false;
        }
        if(ar[i] >= 2 && !vi[ar[i]]) ok = false;
        if(ok) cnt++;
    }
    cout << cnt << endl;
}
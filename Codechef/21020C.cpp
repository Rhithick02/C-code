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
int cnt = 0;
void divisors(int k) {
    For(i, 2, (int)sqrt(k)+1) {
        if(k % i != 0)  continue;
        cnt++;
        if(i != k / i) cnt++;
    }
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        cnt = 0;
        int n;
        string s;
        cin >> n >> s;
        
    }
}
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
    int cnt = 0;
    string s, t;
    cin >>  s >> t;
    if(s.length() < t.length()) 
        swap(s, t);
    for(int i = s.length() - 1, j = t.length() - 1; j>=0; i--,j--) {
        if(s[i] == t[j]) cnt += 2;
        else break;
    }
    cout << s.length() + t.length() - cnt << "\n";
}
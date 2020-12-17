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
    string s;
    cin >> s;
    int cnt = 0, n = s.length();
    vector <int> ar(n + 2);
    For(i, 0, n)
        ar[i] = (s[i] - '0') % 3;
    For(i, 0, n){
        if(ar[i] == 0) cnt++;
        else if(ar[i] == 1) {
            if(ar[i+1] == 2) 
                cnt++, i++;
            else if(ar[i+1] == 1 && ar[i+2] == 1)
                cnt++, i += 2;
        }
        else {
            if(ar[i+1] == 1)
                cnt++, i++;
            else if(ar[i+1] == 2 && ar[i+2] == 2)
                cnt++, i += 2;
        }
    }
    cout << cnt << "\n";
}
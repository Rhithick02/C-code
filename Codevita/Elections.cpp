// #pragma GCC optimize("Ofast")
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
    int n, cnt[2] = {0}, te = 0;
    char ch = ' ';
    string s;
    cin >> n >> s;
    For(i, 0, n){
        if(s[i] == 'A') cnt[0]++;
        else if(s[i] == 'B') cnt[1]++;
        if(ch == ' ' && s[i] != '-'){
            ch = s[i];
            cnt[0] += (ch == 'A'? te:0);
            te = 0;
        }
        else if(s[i] == '-') te++;
        else if(s[i] != '-'){
            if(s[i] != ch) ch = s[i];
            else cnt[s[i]-'A'] += te;
            te = 0;
        }
    }
    cnt[1] += (ch == 'B'? te:0);
    if(cnt[0] > cnt[1]) cout << "A";
    else if(cnt[0] < cnt[1]) cout << "B";
    else cout << "Coalition government";
    cout << "\n";
}
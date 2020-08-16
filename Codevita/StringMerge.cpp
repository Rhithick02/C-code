//Incomplete
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
    int n, pos = 0;
    bool fl = true;
    cin >> s >> n;
    vector <vector <int>> st(s.length() + 1, vector<int>(26, 0)), alp(n, vector<int>(26, 0));
    For(i, 0, (int)s.length()){
        st[i][s[i]-'a']++;
        st[i+1] = st[i];
    }
    vector <string> ar(n);
    For(i, 0, n) cin >> ar[i];
    sort(des(ar));
    For(i, 0, n){
        For(j, 0, (int)ar[i].length())
            alp[i][s[j]-'a']++;
    }
    while(fl && pos < n){
        fl = false;
        For(i, 0, n){
            if(alp[i] == st[pos+ar[i].size()-1]){
                pos += ar[i].size();
                alp[i].clear();
                ar[i].clear();
                fl = true;
            }
        }
    }
    if(fl) cout << "YES\n";
    else cout << "NO\n";
}
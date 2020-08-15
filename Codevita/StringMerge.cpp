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
    int n;
    cin >> s >> n;
    vector <int> alp(26);
    vector <vector <int>> st(n, vector<int>(26, 0))
    vector <string> ar(n);
    For(i, 0, n){
        cin >> ar[i];
        For(j, 0, ar[i].length()){
            alp2[ar[i][j]-'a']++;
        }
    }
    For(i, 0, s.length()) alp1[s[i]-'a']++;
    cout << "YES\n";
}
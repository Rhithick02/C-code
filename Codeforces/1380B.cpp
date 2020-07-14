#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second
#define r s.length()

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        vi st[3];
        string s,res="";
        cin>>s;
        For(i,0,r){
            if(s[i]=='R') st[0].pb(i);
            else if(s[i]=='P') st[1].pb(i);
            else st[2].pb(i);
        }
        if(st[0].size()>=st[1].size() && st[0].size()>=st[2].size()) res+=string(r, 'P');
        else if(st[1].size()>=st[0].size() && st[1].size()>=st[2].size()) res+=string(r, 'S');
        else res+=string(r, 'R');
        cout<<res<<"\n";
    }
    return 0;
}
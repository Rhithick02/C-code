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

int main(){
    ios::sync_with_stdio(false);
    int n,cnt=0;
    string l,r;
    cin>>n>>l>>r;
    vpa ans;
    vi st[27];
    For(i,0,n){
        if(r[i]=='?') st[26].pb(i+1);
        else st[r[i]-'a'].pb(i+1);
    }
    For(i,0,n){
        if(l[i]=='?') continue;
        if(st[l[i]-'a'].size()) cnt++,ans.pb({i+1,st[l[i]-'a'].back()}),st[l[i]-'a'].pop_back();
        else if(st[26].size()) cnt++,ans.pb({i+1,st[26].back()}),st[26].pop_back();
    }
    For(i,0,n){
        if(l[i]!='?') continue;
        For(j,0,27){
            if(!st[j].size()) continue;
            cnt++;ans.pb({i+1,st[j].back()}),st[j].pop_back();
            break;
        }
    }
    cout<<cnt<<endl;
    for(auto it: ans) cout<<it.fi<<" "<<it.se<<"\n";
    return 0;
}
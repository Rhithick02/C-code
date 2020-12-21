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

bool is_present(vi ar,int x){
    return find(asc(ar),x)==ar.end();
}
void dfs(vi edge[],int start,vector<bool> &visited,string &res){
    visited[start]=true;
    res+='a'+start;
    for(auto it: edge[start]){
        if(visited[it]) continue;
        dfs(edge,it,visited,res);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        vector<bool> visited(26);
        string res="";
        int size1=0,other=0,start=0;
        string s;
        vi edge[26];
        cin>>s;
        For(i,0,r){
            if(i!=r-1 && is_present(edge[s[i]-'a'],s[i+1]-'a')){
                edge[s[i]-'a'].pb(s[i+1]-'a');
                edge[s[i+1]-'a'].pb(s[i]-'a');
            }
            if(i && is_present(edge[s[i]-'a'],s[i-1]-'a')){
                edge[s[i]-'a'].pb(s[i-1]-'a');
                edge[s[i-1]-'a'].pb(s[i]-'a');
            }
        }
        For(i,0,26){
            if(!edge[i].size()) continue;
            if(edge[i].size()==1) size1++,start=i;
            else if(edge[i].size()>2) other++;
        }
        if((size1!=2 || other) && r>3){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        dfs(edge,start,visited,res);
        For(i,0,26) if(!visited[i]) res+='a'+i;
        cout<<res<<"\n";
    }
    return 0;
}
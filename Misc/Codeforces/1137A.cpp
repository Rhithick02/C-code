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
    int n,m;
    cin>>n>>m;
    set<int> row[n],col[m];
    vi rowv[n],colv[m];
    vector<vi> ar(n,vi(m,0));
    For(i,0,n){
        For(j,0,m){
            cin>>ar[i][j];
            row[i].insert(ar[i][j]);
            col[j].insert(ar[i][j]);
        }
    }
    For(i,0,n) for(auto it: row[i]) rowv[i].pb(it);
    For(i,0,m) for(auto it: col[i]) colv[i].pb(it);
    For(i,0,n){
        For(j,0,m){
            int x=lower_bound(asc(rowv[i]),ar[i][j])-rowv[i].begin();
            int y=lower_bound(asc(colv[j]),ar[i][j])-colv[j].begin();
            cout<<max(x,y)+max(rowv[i].size()-x,colv[j].size()-y)<<" ";
        }
        cout<<"\n";
    }
}
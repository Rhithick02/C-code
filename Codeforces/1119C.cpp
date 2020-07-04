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
    int n,m,fl=1;
    cin>>n>>m;
    vector<vi> a(n,vi(m,0)),b(n,vi(m,0));
    For(i,0,n) For(j,0,m) cin>>a[i][j];
    For(i,0,n) For(j,0,m) cin>>b[i][j];
    For(i,0,n){
        int cnt=0;
        For(j,0,m) if(a[i][j]!=b[i][j]) cnt++;
        if(!(cnt%2)) continue;
        fl=0;
        break;
    }
    if(!fl){
        cout<<"NO\n";
        exit(0);
    }
    For(i,0,m){
        int cnt=0;
        For(j,0,n) if(a[j][i]!=b[j][i]) cnt++;
        if(!(cnt%2)) continue;
        fl=0;
        break;
    }
    if(!fl){
        cout<<"NO\n";
        exit(0);
    }
    cout<<"YES\n";
    return 0;
}
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

int n,m,fl=0;

bool check(int i,int j){
    return j>=0 && j<m && i-j>=0 && i-j<n;
}

int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    vector<vi> A(n,vi(m,0)),B(n,vi(m,0));
    For(i,0,n) For(j,0,m) cin>>A[i][j];
    For(i,0,n) For(j,0,m) cin>>B[i][j];
    For(i,0,n+m){
        vi Ate,Bte;
        for(int j=i;j>=0;j--) if(check(i,j)) Ate.pb(A[i-j][j]),Bte.pb(B[i-j][j]);
        sort(asc(Ate));
        sort(asc(Bte));
        if(Ate!=Bte){
            fl=1;
            break;
        }
    }
    if(!fl) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
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
#define et 100000

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,x,y,f[4],X[2]={-et,et},Y[2]={-et,et};
        cin>>n;
        For(i,0,n){
            cin>>x>>y>>f[0]>>f[1]>>f[2]>>f[3];
            if(!f[0]) X[0]=max(X[0],x);
            if(!f[1]) Y[1]=min(Y[1],y);
            if(!f[2]) X[1]=min(X[1],x);
            if(!f[3]) Y[0]=max(Y[0],y);
        }
        if(X[0]<=X[1] && Y[0]<=Y[1]) cout<<"1 "<<X[0]<<" "<<Y[0]<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
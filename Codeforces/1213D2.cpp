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
    int n,k,x,mini=1e9;
    cin>>n>>k;
    vi ar[200001];
    For(i,0,n){
        int count=0;
        cin>>x;
        while(x) ar[x].pb(count),x/=2,count++;
    }
    For(i,1,200001){
        if(ar[i].size()<k) continue;
        sort(asc(ar[i]));
        int sum=0;
        For(j,0,k) sum+=ar[i][j];
        mini=min(mini,sum);
    }
    cout<<mini<<endl;
    return 0;
}
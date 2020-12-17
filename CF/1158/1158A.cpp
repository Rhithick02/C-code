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
    lli res=0;
    int n,m;
    cin>>n>>m;
    vi boy(n),girl(m);
    For(i,0,n) cin>>boy[i];
    For(i,0,m) cin>>girl[i];
    sort(des(boy)),sort(asc(girl));
    if(boy[0]==girl[0]){
        For(i,0,m) res+=girl[i];
        res+=1LL*m*boy[1];
    }
    else{
        For(i,1,m) res+=girl[i];
        res+=boy[0]+girl[0]+1LL*(m-1)*boy[1];
    }
    For(i,2,n) res+=1LL*m*boy[i];
    cout<<(boy[0]>girl[0]? -1:res)<<endl;
    return 0;
}
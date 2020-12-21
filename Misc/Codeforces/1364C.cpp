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
    int n,fl=0;
    cin>>n;
    vi ar(n),ans(n);
    vector<bool> check(n+1,false);
    For(i,0,n) cin>>ar[i],check[ar[i]]=true;
    For(i,0,n)
    {
        if(i && ar[i]!=ar[i-1]) 
        {
            ans[i]=ar[i-1];
            continue;
        }
        while(check[fl]) fl++;
        ans[i]=fl;
        check[fl]=true;
    }
    for(auto it: ans) cout<<it<<" ";
    cout<<endl;
    return 0;
}
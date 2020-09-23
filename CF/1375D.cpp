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

int find_mex(int n,vi ar){
    vi st(n+1);
    For(i,0,n) st[ar[i]]++;
    For(i,0,n+1) if(!st[i]) return i;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,x=1e4;
        cin>>n;
        vi ar(n),ans;
        For(i,0,n) cin>>ar[i];
        For(i,0,n){
            if(ar[i]==i) continue;
            while(x!=i){
                x=find_mex(n,ar);
                if(x<n) ar[x]=x;
                else{
                    For(j,i,n){
                        if(ar[j]!=i) continue;
                        ar[j]=n,ar[i]=i;
                        x=i,ans.pb(j);
                        break;
                    }
                }
                ans.pb(x);
            }
        }
        cout<<ans.size()<<"\n";
        for(auto it: ans) cout<<it+1<<" ";
        cout<<"\n";
    }
    return 0;
}
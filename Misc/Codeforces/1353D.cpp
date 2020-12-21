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
    int t;
    cin>>t;
    while(t--){
        int n,k=1;
        cin>>n;
        vi ar(n);
        set<pair<int,pair<int,int>>> te;
        set<pair<int,pair<int,int>>>:: iterator it;
        te.insert({n,{-0,-n+1}});
        while(k<=n){
            pair<int,pair<int,int>> cur=*te.rbegin();
            it=prev(te.end());
            int ind=(-cur.se.fi-cur.se.se)/2;
            te.erase(it);
            ar[ind]=k++;
            te.insert({ind+cur.se.fi,{cur.se.fi,-ind+1}});
            te.insert({-cur.se.se-ind,{-ind-1,cur.se.se}});
        }
        for(auto it: ar) cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}

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
        int n;
        cin>>n;
        vi ar(2*n),ans;
        vector<bool> st(n+1);
        For(i,0,2*n){
            cin>>ar[i];
            if(!st[ar[i]]) st[ar[i]]=true,ans.pb(ar[i]);
        }
        for(auto it: ans) cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}
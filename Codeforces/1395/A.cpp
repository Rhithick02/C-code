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
        int in[4],odd=0,even=0,mini=2e9;
        For(i,0,4){
            cin>>in[i];
            if(i<3) mini=min(mini,in[i]);
            if(in[i]&1) odd++;
            else even++;
        }
        if((even<=1 && mini) || odd<=1) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
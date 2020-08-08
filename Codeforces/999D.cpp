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
#define MAX 200001
int n,m,cnt=0;
map<int,int> mp;
set<int> st;
vi ar(MAX);
void transfer(){
    for(auto it: mp){
        if(it.se<=n/m) continue;
        int temp=it.se-n/m;
        cnt+=temp;
        mp[(it.fi+1)%m]+=temp;
        mp[it.fi]-=temp;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    For(i,0,n) cin>>ar[i],mp[ar[i]%m]++;
    For(i,0,2) transfer();
    cout<<cnt<<"\n";
}
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
        int n,k,te;
        cin>>n>>k;
        te=k;
        vector<vi> ar(n,vi(n,0));
        for(int i=0;i<n && k>0;i++) for(int j=0;j<n && k>0;k--,j++) ar[(i+j)%n][j]=1;
        cout<<(te%n? 2:0)<<endl;
        For(i,0,n){
            For(j,0,n) cout<<ar[i][j];
            cout<<endl;
        }
    }
    return 0;
}
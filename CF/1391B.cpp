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
        string s;
        int n,m,cnt=0;
        cin>>n>>m;
        vector<string> ar;
        For(i,0,n){
            cin>>s;
            ar.pb(s);
        }
        For(i,0,n) if(ar[i][m-1]=='R') cnt++;
        For(i,0,m) if(ar[n-1][i]=='D') cnt++;
        cout<<cnt<<"\n";
    }
}
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
        int n,m,fl=0;
        cin>>n>>m;
        vector<vi> ar(n,vi(m,0));
        For(i,0,n){
            For(j,0,m)
            {
                cin>>ar[i][j];
                if(i>0 && j>0 && j<m-1 && i<n-1){
                    if(ar[i][j]>4) fl=1;
                    else ar[i][j]=4;
                }
                else if((!i && !j) || (i==n-1 && !j) || (!i && j==m-1) || (i==n-1 && j==m-1)){
                    if(ar[i][j]>2) fl=1;
                    else ar[i][j]=2;
                }
                else{
                    if(ar[i][j]>3) fl=1;
                    else ar[i][j]=3;
                }
            }
        }
        if(fl){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        For(i,0,n){
            For(j,0,m) cout<<ar[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
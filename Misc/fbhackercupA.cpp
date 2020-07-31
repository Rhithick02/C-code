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
int n,cnt=0;
string in,out;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        cnt++;
        vector<string> ans;
        cin>>n>>in>>out;
        For(i,0,n){
            string te(n,' ');
            te[i]='Y';
            For(j,i+1,n){
                if(in[j]=='N' || out[j-1]=='N'){
                    For(k,j,n) te[k]='N';
                    break;
                }
                te[j]='Y';
                if(out[j]=='N'){
                    For(k,j+1,n) te[k]='N';
                    break;
                }
            }
            for(int j=i-1;j>=0;j--){
                if(in[j]=='N' || out[j+1]=='N'){
                    for(int k=j;k>=0;k--) te[k]='N';
                    break;
                }
                te[j]='Y';
                if(out[j]=='N'){
                    for(int k=j-1;k>=0;k--) te[k]='N';
                    break;
                }
            }
            ans.pb(te);
        }
        cout<<"Case #"<<cnt<<":\n";
        for(auto it: ans) cout<<it<<"\n";
    }
    return 0;
}
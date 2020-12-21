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
    int n,m,res=0,fl=-1;
    cin>>n>>m;
    map<int,int> mp[n];
    vector<vi> ar(n,vi(m,0));
    For(i,0,n) For(j,0,m) cin>>ar[i][j],mp[i][ar[i][j]]++;
    For(i,0,n) res^=ar[i][0];
    if(res){
        cout<<"TAK\n";
        For(i,0,n) cout<<1<<" ";
    }
    else{
        For(i,0,n) if(mp[i].size()>=2) fl=i;
        if(fl==-1){
            cout<<"NIE\n";
            exit(0);
        }
        cout<<"TAK\n";
        For(i,0,n){
            if(i!=fl){
                cout<<1<<" ";
                continue;
            }
            For(j,1,m){
                if(ar[i][j]!=ar[i][0]){
                    cout<<j+1<<" ";
                    break;
                }
            }
        }
    }
}
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
        int fl=0;
        lli l,r,m;
        cin>>l>>r>>m;
        For(i,l,r+1){
            lli temp=i-m%i;
            if(l+temp>r){
                temp=-m%i;
                if(temp+r<l) continue;
                cout<<i<<" "<<r<<" "<<r+temp<<"\n";
                fl=1;
                break;
            }
            if(!fl) cout<<i<<" "<<l<<" "<<l+temp<<"\n";
            break;
        }
    }
    return 0;
}
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
        int n,fl=0;
        cin>>n;
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        for(int i=n-2;i>=0;i--){
            if(ar[i]>=ar[i+1] && !fl) continue;
            if(ar[i]<=ar[i+1] && fl) continue;
            if(ar[i]<=ar[i+1] && !fl){
                fl=1;
                continue;
            }
            fl=5,cout<<i+1<<"\n";
            break;
        }
        if(fl!=5) cout<<"0\n";
    }
    return 0;
}
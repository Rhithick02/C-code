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
        int n,cnt=0,pos;
        cin>>n;
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        for(int i=0,j=1;i<n;i+=2,j+=2) {
            if(ar[i]>0) ar[i]=-ar[i];
            if(ar[j]<0) ar[j]=-ar[j];
        }
        for(auto it: ar) cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}
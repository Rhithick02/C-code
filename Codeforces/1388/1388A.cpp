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
        int n;
        cin>>n;
        if(n<=30) cout<<"NO\n";
        else if(n==44) cout<<"YES\n5 10 14 15"<<"\n";
        else if(n==36) cout<<"YES\n5 6 10 15\n";
        else if(n==40) cout<<"YES\n1 10 14 15\n";
        else cout<<"YES\n6 10 14 "<<n-30<<"\n";
    }
    return 0;
}
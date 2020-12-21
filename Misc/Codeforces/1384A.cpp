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
        cin>>n;;
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        int big=*max_element(asc(ar));
        string te="";
        For(i,0,big+1) te+='a';
        vector<string> st(n+1,te);
        For(i,0,n){
            fl=(fl+1)%26;
            For(j,i+1,n+1) st[j][ar[i]]=(st[j][ar[i]]-'a'+1)%26+'a';
        }
        for(auto it: st) cout<<it<<endl;
    }
    return 0;
}
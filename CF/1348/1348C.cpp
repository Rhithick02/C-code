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
        int n,k,te=0;
        string s,res="";
        cin>>n>>k>>s;
        te=k;
        sort(asc(s));
        if(s[k-1]!=s[0]) cout<<s[k-1];
        else if(s[0]==s[n-1]) res=s.substr(0,(n+k-1)/k);
        else if(s[k]==s[n-1]){
            res+=s[0],res+=s[k];
            while(te+k<n) te+=k,res+=s[te];
        }
        else res=s.substr(k-1,n-k+1);
        cout<<res<<"\n";
    }
    return 0;
}
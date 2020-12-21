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
#define n(x) x.length()
string s,t;
bool is_sequence(int l,int r){
    int pos=0;
    string te="";
    For(i,0,l) te+=s[i];
    For(i,r+1,n(s)) te+=s[i];
    For(i,0,n(te)) if(te[i]==t[pos]) pos++;
    if(pos==n(t)) return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    int res=0;
    cin>>s>>t;
    For(i,0,n(s)) For(j,i,n(s)) if(is_sequence(i,j)) res=max(res,j-i+1);
    cout<<res<<"\n";
    return 0;
}
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
    int n,k;
    string s,res="";
    cin>>n>>k>>s;
    vi alp(26);
    For(i,0,n) alp[s[i]-'a']++;
    For(i,0,26){
        int te=k;
        if(te>=alp[i]) te-=alp[i],alp[i]=0;
        else te=0,alp[i]-=k;
        k=te;
        if(!k) break;
    }
    For(i,0,n){
        if(!alp[s[n-1-i]-'a']) continue;
        res+=s[n-1-i];
        alp[s[n-1-i]-'a']--;
    }
    reverse(asc(res));
    cout<<res<<"\n";
}
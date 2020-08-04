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

int main(){
    ios::sync_with_stdio(false);
    string s,t,res="",st="";
    int scnt[2]={0},tcnt[2]={0},Tcnt[2]={0},pos=0;
    cin>>s>>t;
    vi pref(n(t));
    For(i,0,n(s)){
        scnt[(s[i]=='0'?0:1)]++;
        if(i<n(t)) tcnt[(t[i]=='0'?0:1)]++;
    }
    For(i,1,n(t)){
        pos=pref[i-1];
        while(pos>0 && t[i]!=t[pos]) pos=pref[pos-1];
        if(t[i]==t[pos]) pos++;
        pref[i]=pos;
    }
    pos=pref[n(t)-1];
    if(scnt[0]<tcnt[0] || scnt[1]<tcnt[1]){
        cout<<s<<"\n";
        exit(0);
    }
    For(i,pos,n(t)) Tcnt[(t[i]=='0'?0:1)]++,st+=t[i];
    res=t,scnt[0]-=tcnt[0],scnt[1]-=tcnt[1];
    while(scnt[0]>=Tcnt[0] && scnt[1]>=Tcnt[1]){
        res+=st;
        scnt[0]-=Tcnt[0];
        scnt[1]-=Tcnt[1];
    }
    For(i,0,scnt[0]) res+='0';
    For(i,0,scnt[1]) res+='1';
    cout<<res<<"\n";
}
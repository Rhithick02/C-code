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

int a,b,x,fl=0;
string s="";

void fuct(){
    while(x--){
        if(fl) s+='0',a--;
        else s+='1',b--;
        fl^=1;
    }
    if(fl){
        while(b--) s+='1';
        while(a--) s+='0';
    }
    else{
        while(a--) s+='0';
        while(b--) s+='1';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b>>x;
    if(a>b) fl=1;
    fuct();
    cout<<s<<"\n";
}
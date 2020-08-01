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
#define MAX 4294967295
#define n te.size()

int main(){
    ios::sync_with_stdio(false);
    lli cnt=0,times;
    vil te(1,1);
    int l;
    string s;
    cin>>l;
    For(i,0,l){
        cin>>s;
        if(s=="for"){
            cin>>times;
            te.pb(min(1LL*(MAX+1),te[n-1]*times));
        }
        else if(s=="add") cnt+=(n>1?te[n-1]:1);
        else te.pop_back();
    }
    if(cnt>MAX) cout<<"OVERFLOW!!!\n";
    else cout<<cnt<<"\n";
}
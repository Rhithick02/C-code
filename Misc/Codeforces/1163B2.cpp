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
#define MAX 100001
int n;
set<int> te;
vi ar(MAX),st(MAX),ovrl(MAX);
bool check(){
    if(te.size()==1 && (*te.begin()==1 || ovrl[*te.begin()]==1)) return true;
    if(te.size()==2){
        int x=0,y=0;
        for(auto it: te){
            if(!x) x=it;
            else y=it;
        }
        if((x==1 && ovrl[x]==1) || (y-x==1 && ovrl[y]==1)) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    For(i,0,n) cin>>ar[i],st[ar[i]]++;
    For(i,1,MAX) if(st[i]) ovrl[st[i]]++,te.insert(st[i]);
    for(int i=n-1;i>=0;i--){
        if(check()){
            cout<<i+1<<"\n";
            break;
        }
        ovrl[st[ar[i]]]--;
        if(!ovrl[st[ar[i]]]) te.erase(st[ar[i]]);
        st[ar[i]]--;
        if(!st[ar[i]]) continue;
        te.insert(st[ar[i]]);
        ovrl[st[ar[i]]]++;
    }
}
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
    int n,count=0,ans;
    set<int> te;
    cin>>n;
    vi ar(n);
    For(i,0,n) cin>>ar[i];
    For(i,0,n){
        if(te.find(ar[i])!=te.end()) break;
        te.insert(ar[i]);
        count++;
    }
    int pos=count;
    ans=count;
    for(int i=n-1;i>=0;i--){
        if(te.find(ar[i])==te.end()){
            te.insert(ar[i]);
            count++;
            if(count>ans) ans=count;
        }
        else if(pos>0)
        {
            te.erase(ar[pos-1]);
            i++;
            pos--;
            count--;
        }
        else break;
    }
    cout<<n-ans<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define vpa vector<pair<int,int>>
#define fi first
#define se second
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string s="";
        vpa ar(10);
        For(i,0,10) cin>>ar[i].fi,ar[i].se=i;
        sort(asc(ar));
        if(ar[0].se) For(i,0,ar[0].fi+1) s+=to_string(ar[0].se);
        else{
            if(ar[0].fi<ar[1].fi){
                s+="1";
                For(i,0,ar[0].fi+1) s+=to_string(ar[0].se);
            }
            else For(i,0,ar[1].fi+1) s+=to_string(ar[1].se);
        }
        cout<<s<<endl;
    }
}
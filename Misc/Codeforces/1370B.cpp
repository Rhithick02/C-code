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
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,x;
        cin>>n;
        vi odd,even;
        For(i,0,2*n){
            cin>>x;
            if(x&1) odd.pb(i+1);
            else even.pb(i+1);
        }
        if(odd.size()==2*n) For(i,0,odd.size()-2) cout<<odd[i]<<" "<<odd[i+1]<<endl,i++;
        else if(odd.size()&1) For(i,0,odd.size()-1) cout<<odd[i]<<" "<<odd[i+1]<<endl,i++;
        else if(odd.size()!=0) For(i,0,odd.size()-2) cout<<odd[i]<<" "<<odd[i+1]<<endl,i++;
        if(even.size()==2*n) For(i,0,even.size()-2) cout<<even[i]<<" "<<even[i+1]<<endl,i++;
        else if(even.size()&1) For(i,0,even.size()-1) cout<<even[i]<<" "<<even[i+1]<<endl,i++;
        else For(i,0,even.size()) cout<<even[i]<<" "<<even[i+1]<<endl,i++;
    }
    return 0;
}
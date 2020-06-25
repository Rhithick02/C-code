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
        lli sum=0,temp=0,maxi=0;
        int n;
        cin>>n;
        vi ar(n);
        For(i,0,n){
            cin>>ar[i];
            if(!(i&1)) sum+=ar[i];
        }
        for(int i=1;i<n;i+=2){
            temp+=ar[i]-ar[i-1];
            maxi=max(maxi,temp+ar[i-1]-ar[i]);
            if(temp<0) temp=0;
        }
        maxi=max(maxi,temp),temp=0;
        for(int i=1;i<n-1;i+=2){
            temp+=ar[i]-ar[i+1];
            maxi=max(maxi,temp+ar[i+1]-ar[i]);
            if(temp<0) temp=0;
        }
        maxi=max(maxi,temp),temp=0;
        cout<<sum+maxi<<endl;
    }
    return 0;
}
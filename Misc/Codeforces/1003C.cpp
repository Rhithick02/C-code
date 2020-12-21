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
    double temp=0;
    cin>>n>>k;
    vi ar(n),pref(n+1);
    For(i,0,n) cin>>ar[i];
    pref[1]=ar[0];
    For(i,2,n+1) pref[i]=pref[i-1]+ar[i-1];
    For(i,k,n+1){
        For(j,0,n-i+1){
            double buf = (1.0*(pref[j+i]-pref[j]))/i;
            temp = max(temp,buf);
        }
    }
    cout<<setprecision(10)<<temp<<"\n";
}
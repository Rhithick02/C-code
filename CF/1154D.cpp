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
    int n,b,a,cnt=0,teb,tea;
    cin>>n>>b>>a;
    teb=b,tea=a;
    vi ar(n);
    For(i,0,n) cin>>ar[i];
    For(i,0,n){
        if(!teb && !tea) break;
        if(!ar[i]){
            if(tea) tea--;
            else if(!tea) teb--;
        }
        if(ar[i]){
            if(tea==a) tea--;
            else if(teb) teb--,tea++;
            else tea--;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
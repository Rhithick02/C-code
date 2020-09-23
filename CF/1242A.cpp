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

void divisors(lli k,vil &ar)
{
    int lim=sqrt(k);
    For(i,2,lim+1){
        if(k%i!=0)  continue;
        ar.pb(i);
        while(k%i==0) k/=i;
    }
    if(k>=2) ar.pb(k);
}

int main(){
    ios::sync_with_stdio(false);
    lli n;
    cin>>n;
    vil ar;
    divisors(n,ar);
    if(ar.size()==1) cout<<ar[0];
    else cout<<1;
    cout<<endl;
    return 0;
}
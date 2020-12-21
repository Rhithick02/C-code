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
        lli low,high;
        int a,b,q,lcm;
        cin>>a>>b>>q;
        lcm=(a*b)/__gcd(a,b);
        int ar[lcm+1] = {};
        For(i,0,lcm) if(i%a%b != i%b%a) ar[i]++;
        For(i,0,lcm-1) ar[i+1]+=ar[i];
        For(i,0,q){
            cin>>low>>high;
            lli ans=high/lcm*ar[lcm-1] + ar[high%lcm];
            ans-=(low-1)/lcm*ar[lcm-1] + ar[(low-1)%lcm];
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
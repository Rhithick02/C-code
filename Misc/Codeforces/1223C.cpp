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

lli n,a,b,x,y,k,sum;
void assign(vil &st){
    for(int i=a-1;i<n;i+=a)  st[i]+=x;
    for(int i=b-1;i<n;i+=b)  st[i]+=y;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        vil ar(n),st(n),pref(n+1),cnt(3);
        For(i,0,n) cin>>ar[i];
        cin>>x>>a>>y>>b>>k;
        if(x<y) swap(x,y),swap(a,b);
        assign(st);
        sort(des(ar));
        For(i,0,n) pref[i+1]=ar[i]+pref[i];
        For(i,0,n){
            if(!st[i]) continue;
            if(st[i]==x) cnt[1]++;
            else if(st[i]==y) cnt[0]++;
            else cnt[2]++;
            sum=0;
            sum+=(pref[cnt[2]]-pref[0])/100*(x+y);
            sum+=(pref[cnt[2]+cnt[1]]-pref[cnt[2]])/100*x;
            sum+=(pref[cnt[2]+cnt[1]+cnt[0]]-pref[cnt[2]+cnt[1]])/100*y;
            if(sum>=k){
                cout<<i+1<<"\n";
                break;
            }
        }
        if(sum<k) cout<<-1<<"\n";
    }
    return 0;
}
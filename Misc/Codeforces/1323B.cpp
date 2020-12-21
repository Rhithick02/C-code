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

void divisors(int k,vi &ar)
{
    For(i,1,(int)sqrt(k)+1)
    {
        if(k%i!=0)  continue;
        ar.pb(i);
        if(i!=k/i) ar.pb(k/i);
    }
    sort(asc(ar));
}

int main(){
    lli res=0;
    int n,m,k,x,count=0;
    cin>>n>>m>>k;
    vi r,c,ar;
    For(i,0,n) 
    {
        cin>>x;
        if(x) count++;
        else r.pb(count),count=0;
    }
    if(count) r.pb(count),count=0;
    For(i,0,m) 
    {
        cin>>x;
        if(x) count++;
        else c.pb(count),count=0;
    }
    if(count) c.pb(count),count=0;
    divisors(k,ar);
    sort(asc(r)),sort(asc(c));
    For(i,0,ar.size())
    {
        int count1=0,count2=0;
        int indr=lower_bound(asc(r),ar[i])-r.begin(),indc=lower_bound(asc(c),k/ar[i])-c.begin();
        For(j,indr,r.size()) count1+=max(0,r[j]-ar[i]+1);
        For(j,indc,c.size()) count2+=max(0,c[j]-k/ar[i]+1);
        res+=count1*count2;
    }
    cout<<res<<endl;
    return 0;
}
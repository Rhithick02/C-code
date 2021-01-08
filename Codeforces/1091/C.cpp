#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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

void divisors(int n,vil &ar)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ar.pb(i);
            if(n/i!=i) ar.pb(n/i);
        }
    }
    sort(asc(ar));
}
int main(){
    lli n;
    vil ar;
    set<lli> te;
    cin>>n;
    divisors(n,ar);
    for(auto it: ar)
    {
        lli sum=(n*(2+it*(n/it-1)))/(2*it);
        te.insert(sum);
    }
    for(auto it: te) cout<<it<<" ";
    return 0;
}
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
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin>>n>>s;
    vi ar;
    divisors(n,ar);
    ar.erase(ar.begin());
    for(auto it: ar){
        string sub=s.substr(0,it),rest=s.substr(it,n-it);
        reverse(asc(sub));
        s=sub+rest;
    }
    cout<<s<<"\n";
}
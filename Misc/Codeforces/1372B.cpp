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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0) cout<<n/2<<" "<<n/2;
        else
        {
            vi ar;
            divisors(n,ar);
            int pos=lower_bound(asc(ar),n/2)-ar.begin();
            if(ar[pos]==n) pos--;
            cout<<ar[pos]<<" "<<n-ar[pos];
        }
        cout<<"\n";
    }
    return 0;
}
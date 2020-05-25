#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
void divisors(int n,int k)
{
    int temp=n;
    set<int> te;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i!=0) continue;
        te.insert(n/i),te.insert(i);
    }
    if(n>2) te.insert(n);
    int max=1;
    for(auto it: te)
    {
        if(it<=k) max=it;
        else break;
    }
    cout<<temp/max;
    //for(auto it: te) cout<<it<<" ";
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k>=n) cout<<"1";
        else
            divisors(n,k);
        cout<<endl;
    }
    return 0;
}
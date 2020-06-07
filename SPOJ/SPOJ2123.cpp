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

int main(){
    int n;
    cin>>n;
    while(n!=-1)
    {
        int sum=0,count=0;
        vi ar(n);
        For(i,n) cin>>ar[i],sum+=ar[i];
        if(sum%n!=0) cout<<-1<<endl;
        else
        {
            For(i,n) if(ar[i]>sum/n) count+=ar[i]-sum/n;
            cout<<count<<endl;
        }
        cin>>n;
    }
    return 0;
}
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
    while(t--)
    {
        int pos;
        lli n,sum,mini=5e18;
        cin>>n;
        vil ar(39);
        For(i,0,39) ar[i]=(lli)pow(3,i);
        pos=lower_bound(asc(ar),n)-ar.begin();
        mini=min(mini,ar[pos]);
        if(pos) sum=ar[--pos];
        while(pos){
            if(sum+ar[--pos]>=n) mini=min(mini,sum+ar[pos]);
            else sum+=ar[pos];
        }
        if(sum>=n) mini=min(mini,sum);
        cout<<mini<<endl;
    }
    return 0;
}
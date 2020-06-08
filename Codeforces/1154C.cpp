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
    int a,b,c,ans,store=0;
    cin>>a>>b>>c;
    int apw=a/3,bpw=b/2,cpw=c/2;
    int temp=min(apw,min(bpw,cpw));
    a-=3*temp,b-=2*temp,c-=2*temp;
    ans=7*temp;
    int ar[]={1,2,3,1,3,2,1};
    for(int i=0;i<7;i++)
    {
        int ta=a,tb=b,tc=c,count=0;
        for(int j=i;j-i<7;j++)
        {
            int mo=(j>6? j%7:j);
            if(ar[mo]==1 && ta>0) count++,ta--;
            else if(ar[mo]==2 && tb>0) count++,tb--;
            else if(ar[mo]==3 && tc>0) count++,tc--;
            else break;
        }
        store=max(store,count);
    }
    cout<<ans+store<<endl;
    return 0;
}
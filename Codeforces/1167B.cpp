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
    int ar[]={4,8,15,16,23,42},ans[6];
    memset(ans,0,sizeof(ans));
    int prod[4];
    cout<<"? 1 2"<<endl<<flush;
    cin>>prod[0];
    cout<<"? 2 3"<<endl<<flush;
    cin>>prod[1];
    cout<<"? 4 5"<<endl<<flush;
    cin>>prod[2];
    cout<<"? 5 6"<<endl<<flush;
    cin>>prod[3];
    vi a(4);
    int k=0;
    For(z,2)
    {
        for(int i=0;i<6 && k<2*(z+1);i++)
        {
            for(int j=i+1;j<6 && k<2*(z+1);j++)
            {
                if(ar[i]*ar[j]==prod[z])
                    a[k++]=ar[i],a[k++]=ar[j];
            }
        }
    }
    if((a[1]==a[2] || a[1]==a[3]) && a[1]!=a[2]) swap(a[2],a[3]);
    else if(a[1]!=a[2])
    {
        swap(a[0],a[1]);
        if(a[1]!=a[2]) swap(a[2],a[3]);
    }
    k=0;
    ans[0]=a[0];
    ans[1]=a[1];
    ans[2]=a[3];
    For(z,2)
    {
        for(int i=0;i<6 && k<2*(z+1);i++)
        {
            for(int j=i+1;j<6 && k<2*(z+1);j++)
            {
                if(ar[i]*ar[j]==prod[z+2])
                    a[k++]=ar[i],a[k++]=ar[j];
            }
        }
    }
    if((a[1]==a[2] || a[1]==a[3]) && a[1]!=a[2]) swap(a[2],a[3]);
    else if(a[1]!=a[2])
    {
        swap(a[0],a[1]);
        if(a[1]!=a[2]) swap(a[2],a[3]);
    }
    ans[3]=a[0];
    ans[4]=a[1];
    ans[5]=a[3];
    cout<<"! "<<flush;
    For(i,6) cout<<ans[i]<<" "<<flush;
    return 0;
}
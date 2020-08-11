#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,m=1,sum=0,sumo=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i+m<=n;)
    {
        for(int j=i;j<i+m;j++)
            sum+=ar[j];
        if(ar[i+m]>0 && i+m<n)
        {
            sum+=ar[i+m];
            m++;
        }
        i+=m;
        for(int j=i;j<i+m && i+m<=n;j++)
            sumo+=ar[j];
        if(ar[i+m]>0 && i+m<n)
        {
            sumo+=ar[i+m];
            m++;
        }    
        i+=m;    
    }
    cout<<sum-sumo;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define mod 1000000007
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    lli prod=1;
    int n,k;
    cin>>n>>k;
    vector<int> a(n/k),b(n/k);
    For(i,n/k) cin>>a[i];
    For(i,n/k) cin>>b[i];
    For(i,n/k)
    {
        lli count=1,temp,low=0,top=0;
        if(b[i]==0 && k==1)
            count=0;
        //if(a[i]/temp<=b[i])
          //  count++;
        temp=int(pow(10,k-1));
        count+=int(pow(10,k))/a[i];
        if(a[i]/temp<=b[i])
        {
            low=(b[i]*temp)/a[i];
            if(low*a[i]!=b[i]*temp)
                low++;
            top=((b[i]+1)*temp)/a[i];
            count-=(top-low+1);
        }
        prod*=count;
        prod%=mod;
    }
    cout<<prod<<endl;
    return 0;
}
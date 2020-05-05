#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        lli n,prod,count=0,flag=-1;
        cin>>n;
        vector<lli> ar(n);
        For(i,n) cin>>ar[i];
        sort(ar.begin(),ar.end());
        prod=ar[0]*ar[n-1];
        for(int i=0;i<n/2;i++)
        {
            if(prod!=ar[i]*ar[n-i-1])
            {
                flag=0;
                break;
            }
        }
        if((n%2!=0 && ar[n/2]*ar[n/2]!=prod) || flag==0)
            cout<<"-1";
        else 
        {
            for(int i=2;i<=sqrt(prod);i++)
            {
                if(prod%i==0 && prod/i==i)
                    count+=1;
                else if(prod%i==0)
                    count+=2;
            }
            if(count==ar.size())
                cout<<prod;
            else 
                cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}
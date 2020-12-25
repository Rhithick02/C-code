#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    lli n,temp;
    cin>>n;
    temp=n;
    vector<lli> ar;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(temp%i==0)
        {
            ar.push_back(i);
            if(i!=n/i)
                ar.push_back(n/i);
        }
    }
    sort(ar.begin(),ar.end());
    //For(i,ar.size()) cout<<ar[i]<<" ";
    for(int j=ar.size()-1;j>=0;j--)
    {
        int flag=-1;
        for(int i=1;i<=ar.size()/2;i++)
        {
            if(ar[j]%(ar[i]*ar[i])==0)
            {
                flag=0;
                break;
            }
        }
        if(flag!=0)
        {
            cout<<ar[j]<<endl;
            break;
        }
    }    
    return 0;
}
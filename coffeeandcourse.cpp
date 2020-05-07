#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int n,m,flag=-1,fi,la,mid,tot=0;
    cin>>n>>m;
    vector<int> ar(n);
    For(i,n) 
    {
        cin>>ar[i];
        tot+=ar[i];
    }
    if(tot<m)
        cout<<"-1";
    else
    {
        lli sum=0;
        sort(ar.begin(),ar.end(),greater<int>());
        fi=1,la=n;        
        while(la-fi>1)
        {
            mid=(fi+la)/2;
            sum=0;
            for(int j=0;j<n;j++)
                sum+=max(0,ar[j]-j/mid);
            if(sum>=m)
                la=mid;
            else
                fi=mid;
        }
        sum=0;
        for(int j=0;j<n;j++)
            sum+=max(0,ar[j]-j/fi);
        if(sum>=m)
            cout<<fi;
        else 
            cout<<la;
    }
    cout<<endl;
    return 0;
}
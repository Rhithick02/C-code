#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n;
    lli prod=1,count=2;
    cin>>n;
    vi ar(n);
    set<int> se;
    For(i,n) cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        int flag=-1;
        if(se.find(ar[i])==se.end() && i!=0)
        {
            prod*=count;
            prod%=998244353;
        }
        for(int j=n-1;j>i;j--) 
        {
            if(ar[j]==ar[i]) 
            {
                for(int l=i+1;l<=j;l++)
                    se.insert(ar[l]);
                i=j;
                break;
            }
        }        
    }
    //For(i,n) cout<<ar[i]<<" ";
    cout<<prod;
    return 0;
}
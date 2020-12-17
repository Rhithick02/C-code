#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    lli n,k;
    cin>>n>>k;
    lli fi=1,la=n,mi,ans=0;
    while(fi!=la)
    {   
        ans=0;
        mi=(la+fi)/2;
        lli temp=mi;
        while(temp)
        {
            ans+=temp;
            temp/=k;
        }
        if(ans>=n)
            la=mi;
        else 
            fi=mi+1;        
    }
    cout<<fi;    
    return 0;
}
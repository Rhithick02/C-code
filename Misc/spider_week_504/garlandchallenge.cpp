#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    lli n,k,temp,count=0;
    cin>>n>>k;
    if(n==1)
        cout<<"-1";
    else if(n<=k)
        cout<<"1";
    else if(n>(k*(k-1)/2)+1)
        cout<<"-1";
    else
    {
        lli temp=n;
        for(lli i=k;i>=2;i--)
        {
            count++;
            if(temp-(i-1)<i)
            {
                count++;
                break;
            }
            temp-=i-1;
        }
        cout<<count;
    }
    return 0;
}
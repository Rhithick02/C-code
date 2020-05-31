#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    lli a,count=1;
    cin>>a;
    while(a>1)
    {
        if(a&1)
        {
            count++;
            a--;
        }
        else 
            a/=2;
    }
    cout<<count<<endl;
    return 0;
}
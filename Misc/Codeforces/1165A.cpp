#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int  n,x,y,count=0;
    cin>>n>>x>>y;
    string str;
    cin>>str;
    for(int i=n-1;i>=n-x;i--)
    {
        if(str[i]=='1' && i!=n-1-y)
            count++;
    }
    if(str[n-1-y]=='0')
        cout<<count+1;
    else 
        cout<<count;
    return 0;
}
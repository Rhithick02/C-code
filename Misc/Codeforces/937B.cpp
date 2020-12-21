#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int p,y,temp=0;
    cin>>p>>y;
    int to;
    for(int j=y;j>p;j--)
    {
        int flag=-1;
        if(p>sqrt(j))
            to=sqrt(j);
        else 
            to=p;
        for(int i=2;i<=to;i++)
        {
            if(j%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==-1)
        {
            cout<<j<<endl;
            temp=-1;
            break;
        }
    }
    if(temp==0)
        cout<<"-1"<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        lli n,h,count=0,temp;
        cin>>n;
        temp=n;
        while(temp)
        {
            if(temp==1)
                temp=0;
            else if(temp==2 || temp==3)  
            {
                count++;
                temp=0;
            }
            else
            { 
                h=(-1+sqrt(1+24*temp))/6;
                temp=temp-((3*h*h+h)/2);
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
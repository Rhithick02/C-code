#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n;
    cin>>n;
    if(n%7==0)
    {
        for(int i=0;i<n/7;i++)
            cout<<"7";
    }
    else
    {
        int flag=-1,count=0;
        int temp=n;
        while(temp>=4)
        {            
            temp-=4;
            if(temp%7==0 && temp!=0)
            {
                count++;
                flag=0;
                break;
            }
            else
                count++;                
        }
        if(count!=0 && temp%7==0)
        {
            for(int i=0;i<count;i++,n-=4)
                cout<<"4";
            if(flag==0)
            {
                for(;n>0;n-=7)
                    cout<<"7";
            }
        }
        else 
            cout<<"-1";
    }
    return 0;
}
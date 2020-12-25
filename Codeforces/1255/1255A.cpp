#include<bits/stdc++.h>
using namespace std;
int mod(int , int);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,count=0;
        cin>>a>>b;
        c=mod(a,b);
        if(c==0)
        cout<<count<<endl;
        else
        {
            int ar[]={5,2,1};
            for(int i=0;i<3;i++)
            {
                count+=c/ar[i];
                c%=ar[i];
            }
            cout<<count<<endl;
        }        
    }
    return 0;
}
int mod(int a, int b)
{
    if(a-b>=0)
    return a-b;
    else 
    return b-a;
}
#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==k)
            cout<<"Chandra";
        else if(k%3!=0 || n<k)
        {
            if(n%3==0)
                cout<<"Surya";
            else 
                cout<<"Chandra";
        }
        else
        {
            int flag=0,count=1;
            for(int i=k+1;i<=n;i+=3,count++)
            {
                if(i==n)
                {
                    flag=-1;
                    break;
                }
                else if(count==k/3)
                {
                    i+=k-2-3*(k/3 - 1);
                    count=0;
                }
            }
            if(flag==0)
                cout<<"Chandra";
            else 
                cout<<"Surya";
        }
        cout<<endl;        
    }
    return 0;
}

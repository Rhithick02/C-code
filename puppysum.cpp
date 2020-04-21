#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,n,temp;
        cin>>d>>n;
        if(d<n)
        {
            temp=n;
            if(d!=1)
            {
                for(int i=0;i<d;i++)
                {
                temp+=n-1;
                n--;
                }
            }
            int sum1=0;
            for(int j=temp;j>0;j--)
            sum1+=j;
            cout<<sum1<<endl;
        }
    }
    return 0;
}
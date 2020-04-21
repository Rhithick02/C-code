#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,count,temp;
    cin>>t;
    while(t--)
    {
        count=0;
        long long int n,k;
        cin>>n>>k;
        long long int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        for(long long int i=0;i<n;i++)
        {
            temp=ar[i];
            temp=k-ar[i];
            for(long long int j=i+1;j<n;j++)
            {
                if(temp==ar[j])
                {
                    count++;
                    break;
                }
            }
            if(count==1)
            break;
        }
        if(count==0)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        int temp=ar[0];
        for(int i=0;i<n;i++)
        {
            if(temp!=ar[i])
            {
                count++;
                temp=i+1;
                break;
            }
        }
        if(count!=0)
        cout<<temp<<endl;
        else 
        cout<<"0"<<endl;
    }
    return 0;
}

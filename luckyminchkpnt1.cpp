#include<bits/stdc++.h>
using namespace std;
int mini(int ar[],int n,int small)
{
    for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i==0)
                small=ar[0];
            if(i>0)
            {
                if(small>ar[i])
                    small=ar[i];
            }
        }
    return small;
}
int main()
{
    int t,n,temp;
    cin>>t;
    while(t--)
    {
        int small=0;
        cin>>n;
        int ar[n];
        temp=mini(ar,n,small);
        for(int i=0;i<n;i++)       
        {
            if(ar[i]==temp)
                small++;
        }
        if(small%2==0)
            cout<<"Unlucky\n";
        else
            cout<<"Lucky\n";
    }
    return 0;
}
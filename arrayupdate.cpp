#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,small;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i==0)
                small=ar[0];
            if(ar[i]<small)
                small=ar[i];
        }
        if(k>small)
            cout<<k-small<<endl;
        else 
            cout<<"0\n";
    }
    return 0;
}
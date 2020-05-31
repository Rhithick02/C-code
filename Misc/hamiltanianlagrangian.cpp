#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,big,ind;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        big=ar[i];
        ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]>big)
            {
                big=ar[j];
                ind=j;
            }
        }
        cout<<big<<" ";
        i=ind;
    }
    return 0;
}
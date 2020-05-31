#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,small=0;
        cin>>n;
        long long int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i==0)
            small=ar[i];
            else
            {
                if(ar[i]<small)
                small=ar[i];
            }
        }
        cout<<small*(n-1)<<endl;
    }
    return 0;
 }

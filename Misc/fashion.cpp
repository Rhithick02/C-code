#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        vector <int> arb(n),arw(n);
        for(int i=0;i<n;i++)
            cin>>arb[i];
        sort(arb.begin(),arb.end());
        for(int i=0;i<n;i++)
            cin>>arw[i];
        sort(arw.begin(),arw.end());
        for(int i=0;i<n;i++)
            sum+=arb[i]*arw[i];
        cout<<sum<<endl;
    }
    return 0;
}
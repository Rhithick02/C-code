#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n),b(n),c(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        {
            c[i]=(a[i]*20)-(b[i]*10);
            if(c[i]<0)
            c[i]=0;
        }
        sort(c.begin(),c.end(),greater<int>());
        cout<<c[0]<<endl;
    }
    return 0;
}
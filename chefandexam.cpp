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
        char co_a[n],ch_a[n];
        cin>>co_a;
        cin>>ch_a;
        for(int i=0;i<n;i++)
        {
            if(co_a[i]==ch_a[i])
            count++;
            else if(ch_a[i]=='N')
            continue;
            else
            i++;            
        }
        cout<<count<<endl;
    }
    return 0;
}
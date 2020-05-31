#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,s,count=0;
        cin>>n>>m>>s;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>s*2)
            {
                i--;
                n--;
            }
            else if(ar[i]<=s*2&&ar[i]>s)
            count++;
        }
        if(n+count<=m)
        cout<<n<<endl;
        else 
        cout<<m<<endl;
        
    }
    return 0;
}
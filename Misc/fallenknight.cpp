#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        for(int i=1;i<=k;i++)
        {
            n++;
            if(n%10==0)
            {
                n-=10;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
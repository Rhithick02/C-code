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
        vector <int> ar(4*n);
        for(int i=0;i<4*n;i++)
            cin>>ar[i];
        sort(ar.begin(),ar.end());
        for(int i=0,j=4*n-1;i<2*n && j>=2*n;i+=2,j-=2)
        {
            if(ar[i]!=ar[i+1] || ar[j]!=ar[j-1])
            {
                count=-1;
                break;
            }
            else if(ar[i]*ar[j]!=ar[i+2]*ar[j-2])
            {
                count=-1;
                break;
            }
        }
        if(count==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
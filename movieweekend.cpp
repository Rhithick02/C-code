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
        vector <int> len(n),rat(n);
        int mr=0,ind=0;
        for(int i=0;i<n;i++)
        cin>>len[i];
        for(int i=0;i<n;i++)
        cin>>rat[i];        
        for(int i=0;i<n;i++)
        {
            if(len[i]*rat[i]>mr)
            {
                mr=len[i]*rat[i];
                ind=i+1;
            }
            else if(len[i]*rat[i]==mr)
            {
                if(rat[i]>rat[ind-1])
                ind=i+1;
            }
        }
        cout<<ind<<endl;        
    }
    return 0;
}
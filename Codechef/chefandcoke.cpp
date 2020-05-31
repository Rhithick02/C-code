#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,l,r,a;
        cin>>n>>m>>k>>l>>r;
        vector <int> cost(n),temp(n),temcost(n);
        for(int i=0;i<n;i++)
        cin>>temp[i]>>cost[i];
        for(int i=0;i<n;i++)
        {
            if(k>(temp[i]-m))
            {
                temp[i]+=m;                
            }
            else if(k<(temp[i]-m))
            {
                temp[i]-=m;
            }
            else
            {
                temp[i]=k;
            }
            
        }
        int count=0;
        for(int i=0,j=0;i<n;i++)
        {
            if(temp[i]>=l&&temp[i]<=r)
            {
                count++;
                temcost[j]=cost[i];
                j++;
                
            }
        }
        if(count==0)
        cout<<"-1"<<endl;
        else
        {
            sort(temcost.begin(),temcost.end());
            int i=0;
            for(;i<n;i++)
            {
                if(temcost[i]!=0)
                break;
            }
            cout<<temcost[i];

        }        
    }
    return 0;
}
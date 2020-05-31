#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,avg,count=1,d;
    cin>>n;
    vector <int> ar(n);
    set<int> te;
    for(int i=0;i<n;i++)
        cin>>ar[i], te.insert(ar[i]);
    sort(ar.begin(),ar.end());
    count = te.size();
    if(count==1)
        cout<<"0";
    else if(count==2 && (ar[0]+ar[n-1])%2==0)
        cout<<(ar[n-1]-ar[0])/2;
    else if(count==2)
        cout<<(ar[n-1]-ar[0]);
    else if(count==3)
    {
        if((ar[0]+ar[n-1])%2==0)
        {
            avg=(ar[0]+ar[n-1])/2;
            d=avg-ar[0];
            for(int i=0;i<n;i++)
            {
                if(!(ar[i]+d==avg || ar[i]-d==avg || ar[i]==avg))
                {
                    count=-1;
                    break;
                }
            }
            if(count==-1)
                cout<<"-1";
            else 
                cout<<d;
        }
        else
            cout<<"-1";
    }
    else
        cout<<"-1";
    return 0;
}
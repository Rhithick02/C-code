#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,twe=0,fif=0,hun=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i==0 && ar[i]!=25)
            count=-1;
    }
    if(count!=-1)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]==25)
                twe++;
            else if(ar[i]==50)
            {
                fif++;
                twe--;
                if(twe<0)
                {
                    count=-1;
                    break;
                }
            }
            else if(ar[i]==100)
            {
                if(fif>0 && twe>0)
                {
                    fif--;
                    twe--;
                }
                else if(twe>2)
                {
                    twe-=3;
                }
                else
                {
                    count=-1;
                    break;
                }
            }
        }
        if(count!=-1)
            cout<<"YES";
        else 
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
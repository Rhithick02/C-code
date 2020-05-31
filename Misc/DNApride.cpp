#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    char ar[1000000];
    cin>>t;
    while(t--)
    {
        count=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]=='U')
                count++;
        }
        if(count!=0)
            cout<<"Error RNA nucleobases found!"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(ar[i]=='A')
                    cout<<"T";
                else if(ar[i]=='T')
                    cout<<"A";
                else if(ar[i]=='G')
                    cout<<"C";
                else
                    cout<<"G";
            }
            cout<<endl;
        }
    }
    return 0;
}
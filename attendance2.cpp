#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count;
        cin>>n;
        vector<string> name(n),Name(n);
        for(int i=0;i<n;i++)
        cin>>name[i]>>Name[i];
        for(int i=0;i<n;i++)
        {   
            count=0;
            for(int j=0;j<n;j++)
            {
                if(name[i]==name[j])
                count++;
            }
            if(count!=1)
            cout<<name[i]<<" "<<Name[i]<<endl;
            else
            cout<<name[i]<<endl;
        }
    
    }
    return 0;
}
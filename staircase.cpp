#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    vector <int> ar(m+1);
    ar[0]=1;
    for(int i=1;i<=m;i++)
    {
        cin>>ar[i];
        if(ar[i]==n)
            count=-1;
    }
    if(count==-1)
        cout<<"NO";
    else
    {
        sort(ar.begin(),ar.end());
        for(int i=1;i<=m;i++)
        {
            if(ar[i]==ar[i-1]+1)
            {
                count++;
                continue;
            }
            else if(count>2)
            {
                cout<<"NO";
                break;
            }
            else
                count=0;
        }
        if(count<=2)
        cout<<"YES";
    }
    return 0;
}
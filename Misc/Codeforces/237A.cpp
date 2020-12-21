#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int hr[n],min[n];
    vector <int> temp(n);
    for(int i=0;i<n;i++)
    {
        cin>>hr[i]>>min[i];
        temp[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(min[i]==min[j])
            {
                if(hr[i]==hr[j])
                    temp[i]++;
            }
        }
        if(temp[i]!=0)
            i+=temp[i]-1;
    }
    sort(temp.begin(),temp.end(),greater<int>());
    cout<<count+temp[0];
    return 0;
}
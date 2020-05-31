#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> ar1(n),ar2(n-1),ar3(n-2);
    for(int i=0;i<n;i++)
        cin>>ar1[i];
    sort(ar1.begin(),ar1.end());
    for(int i=0;i<n-1;i++)
        cin>>ar2[i];
    sort(ar2.begin(),ar2.end());
    for(int i=0;i<n-2;i++)
        cin>>ar3[i];
    sort(ar3.begin(),ar3.end());
    for(int i=0;i<n;i++)
    {
        if(ar1[i]!=ar2[i])
        {
            cout<<ar1[i]<<endl;
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(ar2[i]!=ar3[i])
        {
            cout<<ar2[i]<<endl;
            break;
        }
    }
    return 0;
}
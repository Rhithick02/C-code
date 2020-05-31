#include<bits/stdc++.h>
using namespace std;
void abc(char org[],int s, int e)
{
    if(s>e)
    return;
    int m;
    m=(s+e)/2;
    if(org[m]!='*')
    cout<<org[m];
    org[m]='*';
    abc(org,0,m-1);
    abc(org,m+1,e);
}
int main()
{
    char t,n;
    cin>>t;
    while(t--)
    {   
        cin>>n;
        char org[10000];
        cin>>org;
        abc(org,0,strlen(org)-1);
        cout<<endl;
    }
    return 0;
}
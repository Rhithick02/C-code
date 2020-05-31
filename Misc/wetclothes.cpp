#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,g,k=0,temp,count=0;
    cin>>n>>m>>g;
    int rain[n];
    vector <int> cloth(m);
    for(int i=0;i<n;i++)
        cin>>rain[i];
    for(int j=0;j<m;j++)
        cin>>cloth[j];
    sort(cloth.begin(),cloth.end());
    for(int i=1;i<n && k<g;i++)
    {
        temp=rain[i]-rain[i-1];
        for(int j=count;j<m;j++)
        {
            if(temp>=cloth[j])
                count++;
        }
        k++;
    }
    cout<<count;
    return 0;
}
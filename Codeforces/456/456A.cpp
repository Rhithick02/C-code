#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,flag=0;
    cin>>n;
    vector <int> price(n),quality(n);
    for(int i=0;i<n;i++)
        cin>>price[i]>>quality[i];
    for(int i=0;i<n;i++)
    {
        if(price[i]<quality[i])
            count++;
        else
            flag++;
    }
    if(flag!=0 && count!=0)
        cout<<"Happy Alex\n";
    else 
        cout<<"Poor Alex\n";
    return 0;
}
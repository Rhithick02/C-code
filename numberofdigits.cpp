#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n)
    {
        count++;
        n/=10;
    }
    if(count<=3)
    cout<<count;
    else
    {
        cout<<"More than 3 digits";
    }
    return 0;    
}
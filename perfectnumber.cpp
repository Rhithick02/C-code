#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,count=0;
    cin>>k;
    int ar[10001];
    long long temp=19;
    for(i=19;count<k;i+=9)
    {
        temp=0;
        for(int x=i;x>0;x/=10)
        {
            temp+=x%10;
        }
        if(temp==10)
            count++;

    }
    cout<<i-9;
    return 0;
}
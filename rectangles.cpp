#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i =1;i<=sqrt(n);i++)
    {
        sum+= n/i + 1 - i;
    }
    cout<<sum<<endl;
    return 0;
}
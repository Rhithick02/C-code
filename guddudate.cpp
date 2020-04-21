#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n;
        int sum=0,rem;
        m=n;
        while(m)
        {
            sum+=m%10;
            m/=10;
        }
        if(sum%10!=0)
        rem=10-sum%10;
        else
        rem=0;
        cout<<((n*10)+rem)<<endl;    

    }
    return 0;
}
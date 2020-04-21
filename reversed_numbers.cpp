#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,temp_sum=0,temp_a=0,temp_b=0,sum;
        cin>>a>>b;
        for(int i=1;a>0;i=10)
        {
            temp_a = temp_a*i + a%10;
            a/=10;
        }
        for(int i=1;b!=0;i=10)
        {
            temp_b = temp_b*i + b%10;
            b/=10;
        }
        sum=temp_a+temp_b;
        for(int i=1;sum!=0;i=10)
        {
            temp_sum= temp_sum*i + sum%10;
            sum/=10;
        }
        cout<<temp_sum<<endl;        
    }
    return 0;
}
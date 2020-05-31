#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, prod=1;
        long long b;
        cin>>a>>b;
        while(b>0)
        {
            if(a>9)
                a=a%10;
            if(b%2==1)
                prod = prod * a;
            b = b >> 1;
            a = a * a;
            if(prod>9)
            {
                prod=prod%10;   
            }
        }
        cout<<prod<<endl;
    }
    return 0;
}
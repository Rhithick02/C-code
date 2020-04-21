#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,temp,org=0,i=1;
    cin>>x;
    while(x>9)
    {
        temp=x%10;
        if(temp>4)
            org=(9-temp)*i +org;
        else
            org=org+ i*temp;
        x/=10;
        i*=10;
    }
    if(x!=9 && x>4)
        org=org+ i*(9-x);
    else if(x!=9 && x<=4)
        org=org+ i*x;
    else
        org=org+ i*9;
    cout<<org;
    return 0;
}
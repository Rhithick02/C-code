#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[1000001];
    for(int i=0;;i++)
    {
        cin>>ar[i];
        if(ar[i]==0)
            break;
        else
            cout<<ar[i]*(ar[i]+1)*(2*ar[i]+1)/6<<endl;
    }
    return 0;    
}
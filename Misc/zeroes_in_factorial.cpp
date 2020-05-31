#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long int count=0;
        cin>>n;
        for(int i=5;;i=i*5)
        {
            if(n/i>0)
                count+=n/i;
            else
                break;
        }
    cout<<count<<endl;
    }
    return 0;
}
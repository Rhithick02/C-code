#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int alpha;
        cin>>alpha;
        if(360%(180-alpha)==0)   
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
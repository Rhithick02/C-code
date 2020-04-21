#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g1,g2;
        cin>>g1>>g2;
        if(g1>g2)
        cout<<g1<<" "<<g1+g2;
        else
        cout<<g2<<" "<<g1+g2;
        cout<<endl;
    }
    return 0;

}
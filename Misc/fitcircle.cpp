#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,b,count;
        cin>>l>>b;
        if(l>=b)
        count=l/b;
        else 
        count=b/l;
        cout<<count<<endl;        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp,count=0;
        cin>>n;
        char ch[100000];
        cin>>ch;
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='0')
                count++;            
        }        
        cout<<count<<endl;
    }
    return 0;
}
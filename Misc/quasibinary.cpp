#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,k,count=0;
    cin>>n;
    string s;
    s=to_string(n);
    k=s[0]-48;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]-48>=k)
            k=s[i]-48;        
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++)
    {
        count=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]!='0')
            {
                count=1;
                cout<<"1";
                s[j]=s[j]-1;
            }
            else if(count!=0)
                cout<<"0";
        }
        cout<<" ";
    }
    return 0;
}
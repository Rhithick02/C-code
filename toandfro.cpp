#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,k;
    cin>>n;
    char ch1[201],ch2[201];
    cin>>ch1;
    for(int i=0;i<n;i++)
    {
        ch2[i]=ch1[i];
        for(int j=i;j<=strlen(ch1)-2*n-1;j++)
        {
            if(ch1[++j]=='x')
                break;
            if((j-i)%2==0)
            {
                ch2[j+1]=ch1[j+2*n-1];
                k=j+2*n-1;
            }
            else
                ch2[j+1]=ch1[k+1];
        }
    }
    cout<<ch2<<endl;
    return 0;
}
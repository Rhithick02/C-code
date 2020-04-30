#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,m,count=-1;
    cin>>n>>m;
    if(n>m+1 || m>2*(n+1))
        cout<<count;
    else
    {
        int tzer=n,tone=m,flag=0;
        int countone=1;
        for(int i=0;i<m+n;i++)
        {
            if(tone<=tzer && flag==0)
            {
                cout<<"0";
                flag=-1;
                countone=1;
            }
            else if(countone<=2)
            {
                flag=0;
                cout<<"1";
                countone++;
                tone--;
            }
            else 
            {
                cout<<"0";
                flag=-1;
                tzer--;
                countone=1;
            }
        }
    }
}
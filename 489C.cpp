#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int m,s,flag=-1,temp;
    string big,small,b;
    cin>>m>>s;
    temp=s;
    if(s==0 && m>1)
        flag=0;
    for(int i=0;i<m;i++)
    {
        if(s>=9) big+='9',s-=9;
        else big+=to_string(s),s=0;
    }
    if(s!=0 || flag==0) cout<<"-1 -1";        
    else
    {
        small=big;
        for(int i=m-1;i>=0;i--)
        {
            if(temp>9)
            {
                small[i]='9';
                temp-=9;
            }
            else
            {
                if(i==0)
                    small[i]=temp+'0';
                else if(temp>1)
                {
                    small[i]=(temp-1)+'0';
                    temp=1;
                }
                else if(temp==1)
                small[i]='0';
            }
        }
        cout<<small<<" "<<big;
    }
    cout<<endl;
    return 0;
}
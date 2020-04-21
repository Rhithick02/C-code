#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,temp,flag1=0,flag2=0,p1,p2;
    cin>>temp>>a2;
    if(temp==1 && a2==1)
    {
        cout<<flag1<<endl;
    }
    else
    {
        a1=min(temp,a2);
        a2=max(temp,a2);
        p1=a1;
        p2=a2;
        while((a1>2 && a2>=1) || (a1>=1 && a2>2))
        {        
            while(a2>2)
            {
                a1+=1;
                a2-=2;
                flag1++;
            }
            while(a1>2)
            {
                a1-=2;
                a2+=1;
                flag1++;
            }
        }
        flag1++;
        while((p1>=1 && p2>2) || (p1>2 && p2>=1))
        {
            if(flag2%2==0)
            {
                p1+=1;
                p2-=2;
                flag2++;
            }
            else
            {
                p2+=1;
                p1-=2;
                flag2++;
            }
        }
        flag2++;
        cout<<max(flag1,flag2);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c1=0,c2=0,a;
    cin>>t;
    while(t--)
    {
        int l,b,c1,c2;
        cin>>l>>b;
        if(l%b==0||b%l==0)
        {
            c1=l/b;
            c2=b/l;
            if(c1>0)
            cout<<c1;
            else 
            cout<<c2;          
        }
        else
        {
            a=pow(l*b,0.5);
            c1=l*b;
            for(int i=a;i>1;i--)
            {
                if((l*b)%(i*i)==0)
                {
                    c1=(l*b)/(i*i);
                    break;
                }

            }
        }
        cout<<c1<<endl;
    }
    return 0;
}
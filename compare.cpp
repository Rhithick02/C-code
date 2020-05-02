#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
for(int k=3;k<=100;k++)
{
    vector<bool>ar(1000+1);
    bool temp;
	ar[0]=0,ar[1]=1,ar[2]=1;
    for(int i=3;i<=1000;i++)
	{
		if(i<k)
		{
            if(!ar[i-1] || !ar[i-2])
                ar[i]=1;
            else 
                ar[i]=0;
        }
        else 
        {
            if(!ar[i-1] || !ar[i-2] || !ar[i-k])
                ar[i]=1;
            else 
                ar[i]=0;
        }
    }
    for(int n=2;n<=1000;n++)
    {
        if(n==k)
            temp=1;
        else if(n<k || k%3!=0)
        {
            if(n%3==0)
                temp=0;
            else 
               temp=1;
        }
        else
        {
            if(k==3)
            {
                if(n%4==0)
                    temp=0;
                else 
                    temp=1;
            }
            else if((n-1)%3==0)
                temp=0;
            else 
                temp=1;
        }
        if(temp!=ar[n])
        {
            cout<<n<<" "<<k<<" NOT\n";
            exit(0);
        }

    }
}
	return 0;
}
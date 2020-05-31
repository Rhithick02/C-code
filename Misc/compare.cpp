#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
for(int k=3;k<=100;k++)
{
    vector<bool>ar(1000+1);
    bool temp;
	
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
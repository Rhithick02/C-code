#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    cin>>t;
    while(t--)
    {
        count=0;
        char ch1[100000];
        cin>>ch1;
        if(strlen(ch1)%2!=0)
        {
            for(int i=0;i<strlen(ch1);i++)
            {
                if(i!=strlen(ch1)/2)
                {
                    if(ch1[i]!=ch1[strlen(ch1)-1-i])
                    {
                        count++;
                        break;
                    }
                }
            }
            if(count==0)
                cout<<"YES ODD\n";
            else 
                cout<<"NO\n";
        }
        else if(strlen(ch1)%2==0)
        {
            for(int i=0;i<strlen(ch1);i++)
            {
                if(ch1[i]!=ch1[strlen(ch1)-1-i])
                {
                    count--;
                    break;                
                }
            }
            if(count==0)
                cout<<"YES EVEN\n";
            else 
                cout<<"NO\n";
        }        
    }
    return 0;
}
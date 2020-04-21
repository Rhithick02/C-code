#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int heap;
        char name[10];
        cin>>heap;
        gets(name);
        int stone[heap];
        for(int i=0;i<heap;i++)
        cin>>stone[i];
        if(name="Dee")
        {
            for(int i=0;i<heap;i++)
            {
                if(stone[i]%2==0||stone[i]>2)
                {
                    stone[i]-=2;
                    break;
                }
            }
        }
    }
}
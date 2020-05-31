#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[6],store[10]={0},count=-1;
    for(int i=0;i<6;i++)
    {
        cin>>ar[i];
        store[ar[i]]++;
    }
    for(int i=1;i<10;i++)
    {
        if(store[i]>=4)
        {
            count++;
            break;
        }
    }
    if(count==-1)
        cout<<"Alien";
    else
    {
        for(int i=1;i<10;i++)
        {
            if(store[i]==2 || store[i]==6)
            {
                count=-1;
                cout<<"Elephant";
                break;
            }
            /*else if(store[i]>0)
            {
                count++;
            }*/           
        }
        if(count!=-1)
            cout<<"Bear";
    }
    return 0;       
}
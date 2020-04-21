//charges
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos=0,neg=0,zer=0;
    int positive,negative,zero;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[n];
        if(ar[n]>0)
        pos++;
        else if(ar[n]<0)
        neg++;
        else 
        zer++;
    }
    positive=(pow(2,pos)-1-pos)+(pow(2,neg-1)-1)+pos;
    negative=(pos*neg)+neg;
    zero=pos+neg+zer;
    cout<<negative<<" "<<zero<<" "<<positive;
    return 0;
}
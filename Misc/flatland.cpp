#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int circles;
        cin>>circles;
        int square,count=0;
        for(;circles!=0;)
        {
            square=sqrt(circles);
            circles-=square*square;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int points,matches;
        cin>>points>>matches;
        if(points/2==matches)
        cout<<matches<<endl;
        else if(points<=matches) 
        cout<<"0\n"<<endl;
        else 
        cout<<points-matches<<endl;
    }
    return 0; 
}
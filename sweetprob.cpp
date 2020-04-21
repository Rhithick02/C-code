#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        vector <int> st(3);
        cin>>st[0]>>st[1]>>st[2];
        sort(st.begin(),st.end());
        if(st[0]+st[1]<=st[2])
            cout<<st[0]+st[1];
        else if((st[0]+st[1]+st[2])%2==0)
            cout<<(st[0]+st[1]+st[2])/2;
        else 
            cout<<(st[0]+st[1]+st[2])/2 + 1;
        cout<<endl;
    }
    return 0;
}
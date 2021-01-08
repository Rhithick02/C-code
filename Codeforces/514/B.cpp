#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    double n,x,y,x1,y1,count=0,flag=0;
    cin>>n>>x>>y;
    set<double> st;
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1;
        if(x==x1)
            count=1;
        else if(y==y1)
            flag=1;
        else 
            st.insert((y1-y)/(x1-x));
    }
    cout<<st.size()+count+flag;
    cout<<endl;
    return 0;
}
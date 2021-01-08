#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,k,cs,count=0,size=0;
    cin>>n>>k;
    string str[n+1];
    for(int i=0;i<=n;i++)
        cin>>str[i];
    cs=str[n].length();
    for(int i=0;i<n;i++)
    {
        if(str[i].length()<cs)
            count++;
        else if(str[i].length()==str[n].length())
            size++;
    }
    int bestcase=count+(count/k)*5 + 1,worstcase=0;    
    count=0;
    for(int i=0;i<n;i++)
    {
        if(str[i].length()<=cs)
        {
            if(count%k==0 && count!=0)
                worstcase+=5;
            count++;
            worstcase++;            
        }
    }
    cout<<bestcase<<" "<<worstcase;
    return 0;
}
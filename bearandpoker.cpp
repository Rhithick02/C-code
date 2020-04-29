#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,lcm,flag=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]%3==0)
            while(ar[i]%3==0)
                ar[i]/=3;
        if(ar[i]%2==0)
            while(ar[i]%2==0)
                    ar[i]/=2;
    }
    int min=*min_element(ar.begin(),ar.end());
    for(int i=0;i<n;i++)
    {
        if(ar[i]%min!=0)
        {
            flag=-1;
            break;
        }
        if(!(ar[i]/min==1 || ((ar[i]/min)%2==0 || (ar[i]/min)%3==0)))
        {
            flag=-1;
            break;
        }
    }
    if(flag!=-1)
        cout<<"Yes";
    else 
        cout<<"No";
    return  0;    
}
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int a,b,temp,flag=0;
    cin>>a;
    set<int> se1,se2;
    For(i,a)
    {
        cin>>temp;
        se1.insert(temp);
    }
    cin>>b;
    For(i,b)
    {
        cin>>temp;
        se2.insert(temp);
    }
    for(auto i: se1)
    {
        for(auto j: se2)
        {
            if(se1.find(i+j)==se1.end() && se2.find(i+j)==se2.end())
            {
                cout<<i<<" "<<j;
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    return 0;
}
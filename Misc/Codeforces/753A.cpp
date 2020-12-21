#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    vector<int> ar;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(sum<=n)
        {
            sum+=i;
            ar.push_back(i);        
        }
        else 
            break;
    }
    if(ar.size()==1)
        cout<<"1"<<endl;
    else 
        cout<<ar.size()-1<<endl;
    for(auto it=ar.begin();it!=ar.end();it++)
    {
        if(*it==sum-n)
        {
            ar.erase(it);
            break;
        }
    }
    for(auto v : ar)
        cout<<v<<" ";
    return 0;
}
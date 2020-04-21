#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    set<int> se;
    set<int>::iterator it;
    int temp=n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]<temp)
        {
            se.insert(ar[i]);
            cout<<endl;
        }
        else 
        {
            cout<<ar[i]<<" ";
            for(it=se.rbegin();it!=se.rend();it++)
            {
                if(*it+1==ar[i])
                {
                    cout<<*it<<" ";
                    temp=*it-1;
                }
                else 
                    break;
            }
        }
    }
    return 0;
}
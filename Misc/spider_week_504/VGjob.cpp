#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int s,d,n,l,k,m;
    vector<int> count;
    cin>>d>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>k>>m;
        if(d+s*(l-2)>=k)
            count.push_back(-1);
        else
        {
            lli temp=k-(d+s*(l-2)),flag=-1;
            for(int j=l+1;temp>=s;j++)
            {
                temp=temp-s;
                if(j==l+m)
                {
                    temp=temp-(d+s*(l-2));
                    if(temp<0)
                    {
                        flag=0;
                        count.push_back(j-1);
                        break; 
                    }
                    m+=m;
                }
                if(temp<s)
                {
                    count.push_back(j);
                    flag=0;
                    break;
                }
            }
            if(flag!=0)
                count.push_back(-1);
        }
    }
    for(auto it:count)
        cout<<it<<"\n";
    return 0;
}
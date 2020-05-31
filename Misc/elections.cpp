#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,big,pos;
    cin>>m>>n;
    vector <int> can(n),ind(m);
    for(int i=0;i<n;i++)
    {     
        for(int j=0;j<m;j++)
        {
            cin>>can[j];
            if(j==0)
            {
                big=can[j];
                pos=1;
            }
            else if(big<can[j])
            {
                big=can[j];
                pos=j+1;
            }
        }
        ind[pos-1]++;
    }
    int small=ind[0];
    int temp=1;
    for(int i=0;i<m;i++)
    {
        if(small<ind[i])
        {
            small=ind[i];
            temp=i+1;
        }
    }
    cout<<temp;
    return 0;
}
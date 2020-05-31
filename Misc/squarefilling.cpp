#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,m,count=0;
    cin>>n>>m;
    int ar[n][m],br[n][m];
    vector<int> str,stc;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
            br[i][j]=0;
        }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(ar[i+1][j]==1 && ar[i][j]==1 && ar[i+1][j+1]==1 && ar[i][j+1]==1)
            {
                str.push_back(i+1);
                stc.push_back(j+1);
                br[i+1][j]=1,br[i][j]=1,br[i+1][j+1]=1,br[i][j+1]=1;
                count++;
            }       
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]!=br[i][j])
            {
                count=-1;
                break;
            }
        }
        if(count==-1)
            break;
    }
    cout<<count<<endl;
    if(count!=-1)
    {
        for(int i=0;i<str.size();i++)
            cout<<str[i]<<" "<<stc[i]<<endl;
    }
    return 0;
}
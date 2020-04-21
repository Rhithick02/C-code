#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int in[N],ou[N*(N-1)/2],temp[N*(N-1)/2];
        vector <int> sum(N*(N-1)/2);
        for(int i=0;i<N;i++)
        cin>>in[i];
        int k=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++,k++)
            {
                ou[k]=in[i]*in[j];
            }
        }
        k=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++,k++)
            {   
                sum[k]=0;
                while(ou[k]!=0)
                {
                    sum[k]+=ou[k]%10;
                    ou[k]/=10;
                }
            }
        }
        sort(sum.begin(),sum.end(),greater <int>());
        cout<<sum[0]<<endl;
    }
    return 0;
}
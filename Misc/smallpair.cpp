#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,sum;
        cin>>N;
        vector<int> seq(N);
        for(int i=0;i<N;i++)
        cin>>seq[i];
        sort(seq.begin(),seq.end());
        sum=seq[0]+seq[1];
        cout<<sum<<endl;
    }
    return 0;
}
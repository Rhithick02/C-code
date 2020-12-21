    #include<bits/stdc++.h>
    using namespace std;
    #define lli long long
    int main(){
        int n,k,imp=0,pos=1,sum=0;
        cin>>n>>k;
        vector<int> ar(n);
        set<int>pr;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int j=0;j<k;j++)
            sum+=ar[j];
        if(n>1)
        {
            imp=sum;
            for(int i=1;i<n-k+1;i++)
            {
                sum+=ar[k+i-1]-ar[i-1];
                if(imp>sum)
                {
                    imp=sum;
                    pos=i+1;
                }
            }
        }
        cout<<pos;    
        return 0;
    }
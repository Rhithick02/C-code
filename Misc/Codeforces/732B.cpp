    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,k,count=0,temp;
        cin>>n>>k;
        vector <int> ar(n);
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=1;i<n;i++)
        {
            temp=k-ar[i-1];
            if(temp>0 && ar[i]<temp)
            {
                count+=temp-ar[i];
                ar[i]=temp;
            }
        }
        cout<<count<<endl;
        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
        return 0;
    }


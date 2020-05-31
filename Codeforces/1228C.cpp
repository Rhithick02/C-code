    #include<bits/stdc++.h>
    using namespace std;
    #define lli long long
    #define mod 1000000007
    #define For(i,n) for(int i=0;i<n;i++)

    void prime(lli x, vector<int> &ar)
    {
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                ar.push_back(i);
                while(x%i==0)
                    x/=i;
            }
        }
        if(x>=2)
            ar.push_back(x);
    }
    lli powers(lli x,lli n)
    {
        if(n==0)
            return 1;
        else if(n%2==0)
        {
            lli te = powers(x,n/2);
            return (te*te)%mod;
        }
        else 
            return (x*powers(x,n-1))%mod;
    }
    int main(){
        lli n,x,prod=1;    
        cin>>x>>n;
        vector<int> ar;
        prime(x,ar);
        For(i,ar.size())
        {
            lli pow=0,temp=n;
            while(temp>0)
            {
                temp/=ar[i];
                pow+=temp;
            }
            prod=((prod%mod)*(powers(ar[i],pow)%mod))%mod;
        }
        cout<<prod<<endl;
        return 0;
    }
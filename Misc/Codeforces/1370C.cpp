#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second
#define A "Ashishgup"
#define F "FastestFinger"

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<F;
        else if(n==2) cout<<A;
        else if(n&1) cout<<A;
        else{
            int count=0,temp=n;
            while(temp){
                if(temp&1) count++;
                temp=temp>>1;
            }
            if(count==1) cout<<F;
            else{
                count=0;
                for(int i=2;i<=sqrt(n/2);i++){
                    if((n/2)%i==0){
                        count=1;
                        break;
                    }
                }
                if(!count) cout<<F;
                else cout<<A;
            }
        }
        cout<<endl;
    }
    return 0;
}
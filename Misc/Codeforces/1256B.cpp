#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vi ar(n),st;
        For(i,n) cin>>ar[i];
        for(int i=1;i<n;)
        {
            int mini=min_element(ar.begin()+i,ar.end())-ar.begin();
            int temp=ar[mini];
            int j=mini-1;
            while(j>=i-1 && ar[j]>temp)
            {
                ar[j+1]=ar[j];
                j--;
            }
            ar[++j]=temp;
            i=mini+1;
        }
        For(i,n) cout<<ar[i]<<" ";
        cout<<endl;
    }
    return 0;
}
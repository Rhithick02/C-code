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
    vi ar(5);
    For(i,5) ar[i]=i;
    cout<<min_element(ar.begin()+2,ar.begin()+5) - ar.begin()<<endl;
    return 0;
}
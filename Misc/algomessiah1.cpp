#include<bits/stdc++.h>
using namespace std;
//vector <int> arcpy(n);
int main()
{
    int n,index1,index2,count=0;
    cin>>n;
    int ar[n],qu[3],du1[n],du2[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int k;
    cin>>k;
    for(int z=0;z<k;z++)
    {
        index1=index2=0;
        for(int i=0;i<3;i++)
        cin>>qu[i];
        for(int a=0;a<n;a++)
        {
            if(qu[2]<ar[a])
            du1[index1++]=ar[a];
        }
        for(int a=0;a<qu[1];a++)
        {
            for(int l=1;l<=sqrt(ar[a]);l++)
            {
                if(ar[a]%l==0)
                {
                    count++;
                    if(count==2)
                    break;
                }
            }
            if(count==1)
            {du2[index2++]=ar[a];
            count=0;}
            else 
            count=0;
        }
        for(int i=0;i<index1;i++)
        {
            for(int j=0;j<index2;j++)
            {
                if(du1[i]==du2[j])
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
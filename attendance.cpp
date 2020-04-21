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
        vector<string> name(N),Name(N);
        for(int i=0;i<N;i++)
            cin>>name[i];
        /*for(int i=0;i<N;i++)
        {
            for(int j=0;name[i][j]!=" ";j++)
                Name[i][j]=name[i][j];        
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(strcmp(Name[i],Name[j])==0)
                    puts(name[i]);
                else
                    puts (Name[i]);                            
            }
        }*/
    }
    return 0;
}
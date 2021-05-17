#include<bits/stdc++.h>
using namespace std;
int N,M;
char Map[501][501];
bool ans;
void dfs(int a,int b)
{
    if(Map[a][b]=='.'||Map[a][b]=='S')
    {
        dfs(a+1,b);
        dfs(a,b+1);
    }
    if(Map[a][b]=='E')ans=true;
}
int main()
{
    while(cin>>N>>M)
    {
        ans=false;
        memset(Map,0,sizeof(Map));
        for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            cin>>Map[i][j];
        dfs(0,0);
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}




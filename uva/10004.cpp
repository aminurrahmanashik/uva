///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define M 100009
using namespace std;
vector<int>adj[M+2];
int clr[M+2];
bool is_possible=true;
void dfs(int u)
{
	int sz=adj[u].size();
	for(int i=0;i<sz;i++)
	{
		int v=adj[u][i];
		if(clr[v]==0)
		{
			clr[v]=1-clr[u]
			
		}
		
	}
}
main()
{
	
	while(1)
	{  int n;
	    cin>>n;
	    is_possible=true;
		if(n==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			adj[i].clear();
		}
	    int l;
	    cin>>l;
	    while(l--)
	    {
	    	
	    	int u,v;
	    	cin>>u>>v;
	    	adj[u].push_back(v);
	    	adj[v].push_back(u);
	    	
		}
	    memset(clr,0,sizeof(clr));
	    dfs(1);
	    if(is_possible==true)
	    {
	    	printf("BICOLOURABLE\n");
		}
		else
		{
			printf("NOTBICOLOURABLE\n");
		}
	
	}
	return 0;
}

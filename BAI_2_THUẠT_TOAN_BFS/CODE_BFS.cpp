#include<bits/stdc++.h>
#define ll long long
using namespace std;
void add_edge(int m,vector <int> ver[])
	{
		while(m--)
		{	int a,b;
			cin>>a>>b;
			ver[a].push_back(b);
		}
	}
void BFS(int i,vector< int> &visited ,vector <int> ver[])
	{	queue <int> Q;
		Q.push(i);
		while(!Q.empty())
			{	int cur =Q.front();
				Q.pop();
				if(visited[cur]==0)
					{
					for(auto c: ver[cur])
						Q.push(c);	
					visited[cur]=1;						
					}			
			}
	}
void check_graph(int n, vector< int> visited ,vector <int> ver[])
{
	int k=0;
		for(int i=1;i<=n;i++)
			{
				if(visited[i]==0)
					{
						BFS(i, visited, ver);
						k++;
					}
			}
		k==1? cout<<"do thi lien thong": cout<<"do thi co " <<k<<" thanh phan lien thong";
}
int main()
{	int n, m;
cin>>n>>m;
	vector< int> visited (n+1);
	vector <int> ver[n+1];
	add_edge(m, ver);
	check_graph(n, visited, ver);
return 0;
}



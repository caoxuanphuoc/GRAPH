#include<bits/stdc++.h>
#define ll long long
using namespace std;
// write 2 funcion to add edge and top
void add_edge(vector <int > a[],int x, int y)
{
	a[x].push_back(y);
	a[y].push_back(x);
}
void print_graph(vector <int> a[],int n)
{	
	for( int i=0;i<=n;i++)
	{	cout<<"dinh "<<i<<" lien thong voi cac dinh sau: ";
		for( auto c: a[i])
			cout<<c<<" ";
		cout<<'\n';
	}
	
}

int main()
{ int n; cin>>n;
	vector <int > a[n+1];
	add_edge(a,0,1);
	add_edge(a,0,4);
	add_edge(a,1,4);
	add_edge(a,1,3);
	add_edge(a,1,2);
	add_edge(a,2,3);
	add_edge(a,3,4);
	print_graph(a,n);
return 0;
}
/*
*/


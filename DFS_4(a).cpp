#include <iostream>
using namespace std;
int n,adj[20][20],visited[10];

void DFS(int i)
{
	cout<<i<<"\t";
	visited[i]=1;
	for(int j=1;j<n;j++)
	{
		if((adj[i][j]==1) && visited[j]==0)
			DFS(j);
	}
}	


int main(int argc, char **argv)
{ 
	
	cout<<"Enter the no. of vertices :";
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		cout<<"Row "<<i;
		for(int j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	for (int i=0;i<n;i++)
		visited[i]=0;
	DFS(0);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		
		if(visited[i]==0)
		{ cout<<endl;
			DFS(i);
	     }
	}
	return 0;
	
}

#include <bits/stdc++.h>
using namespace std;

void printBFS(int** edges, int n, int sv, bool* visited)
{
    queue<int> pending_nodes;
    pending_nodes.push(sv);
    visited[sv] = true;
    while(!pending_nodes.empty())
    {
        int current_vertex = pending_nodes.front();
        pending_nodes.pop();
        cout << current_vertex << " ";
        for(int i=0;i<n;i++)
        {
            if(i == current_vertex)
            {
                continue;
            }
            if(edges[current_vertex][i]==1 && !visited[i])
            {
                pending_nodes.push(i);
                visited[i] = true;
            }
        }
    }
}
void BFS(int** edges, int n)
{
    bool* visited = new bool[n];
    for(int i=0;i <n;i++)
    {
        visited[i] = false;
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            printBFS(edges,n,i,visited);
        }
    }
    delete [] visited;
}
int main()
{
	int n,e;
	cin >> n >> e;
	int** edges = new int*[n];
	for(int i=0;i<n;i++)
    {
        edges[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int f,s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    BFS(edges,n);
    for(int i =0;i<n;i++)
    {
        delete [] edges[i];
    }
    delete [] edges;
    
    return 0;
}

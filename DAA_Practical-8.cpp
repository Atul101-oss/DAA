#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void DFS(vector<vector<int>>& graph, vector<int>& visited, int startNode){
	visited[startNode] = true;
	cout << startNode;

	for (int child : graph[startNode]){
		if (!visited[child]){
			DFS(graph,visited,child);
		}
	}
}

int main(){
	cout << "DFS_Algorithm";
	vector<vector<int>> graph = {{2,3},
								{1,5},
								{1,6},
								{3},
								{2},
								{3}};
	vector<int> visited(graph.size(),false);
	int startNode = 0;

	DFS(graph, visited, startNode);


	return 0;
}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void DFS(vector<vector<int>>& graph, vector<int>& visited, int startNode){
	visited[startNode] = true;
	cout << startNode << " ";

	for (int child : graph[startNode]){
		if (!visited[child]){
			DFS(graph, visited, child);
		}
	}
}

int main(){
	cout << "DFS_Algorithm\n";
	vector<vector<int>> graph;
	
    //int u, v;
    //while (cin >> u >> v) {
    //    graph[u].push_back(v);
    //    graph[v].push_back(u); // For undirected graph
    //    cout << "Next Input!";
    //}

	graph = {{},
	 	 {2,3,5},
 		 {1},
 		 {1,4,5},
 		 {3,5},
 		 {1,3,4}};
 	
	vector<int> visited(graph.size(),false);
	int startNode = 1;

	DFS(graph, visited, startNode);


	return 0;
}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int>>& graph, vector<bool>& visited, int startNode){
	// cout << "StartDebuging\n";

	queue<int> q;
	q.push(startNode);
	visited[startNode] = true;

	while(!q.empty()){
		int current = q.front();
		q.pop();
		cout << current<<" ";
		// cout <<"\ncurrent Node " << current << "->";
		for (int child : graph[current]){
			// cout << child;
			if (!visited[child]){
				// cout << child;
				q.push(child);
				visited[child] = true;
			}
		}
	}
}


int main(){
	vector<vector<int>> graph;
	graph = {{},
	 	 {5,3,2},
 		 {1,6},
 		 {1,6,4,5},
 		 {5,3},
 		 {1,3,4},
 		 {3,2}};

 	vector<bool> visited(graph.size(),false);
	int startNode = 1;

	BFS(graph,visited,startNode);
	return 0;
}
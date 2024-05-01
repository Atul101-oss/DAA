#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int>>& graph, vector<bool>& visited, int startNode){
	cout << "Hello ji";

	queue<int> q;
	q.push(startNode);
	visited[startNode] = true;

	
	cout << startNode;

	while(!q.empty()){
		int current = q.front();
		q.pop();
		visited[current] = true;
		cout << current << " ";

		for (int child : graph[current]){
			if (!visited[child]){
				q.push(child);
				visited[child] = true;
			}
		}
	}
}

// void display(vector<int>& visited){

// 	for (int elem : visited){
// 		cout << elem<<" ";
// 	}
// 	cout << endl;
// }

int main(){
	cout << "graph";
	vector<vector<int>> graph = {{2,3},
								 {1,5},
								 {1,6},
								 {3},
								 {2},
								 {3}};

	vector<bool> visited(graph.size(),false);
	int startNode = 0;

	BFS(graph,visited,startNode);
	// display(visited);
	return 0;
}
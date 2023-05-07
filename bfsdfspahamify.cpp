//Muhammad Furqony Sabililhaq
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <list>

// #include <bits/stdc++.h>
using namespace std;

class DiGraph { 
    int V;    // No. of vertices 
   
    // Pointer to an array containing adjacency lists 
    list<int> *adjList;    
	public: 
    DiGraph(int V);  // Constructor 
   
    // add an edge from vertex v to w
    void addEdge(int v, int w);  
   
    // BFS traversal sequence starting with s ->starting node 
    void BFS(int s);
    void DFS(int s);   
}; 
   
DiGraph::DiGraph(int V) { 
    this->V = V; 
    adjList = new list<int>[V]; 
}

void DiGraph::addEdge(int v, int w) { 
    adjList[v].push_back(w); // Add w to v’s list. 
} 
   
void DiGraph::BFS(int s) { 
    // initially none of the vertices is visited
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
   
    // queue to hold BFS traversal sequence 
    list<int> queue; 
   
    // Mark the current node as visited and enqueue it 
    visited[s] = true; 
    queue.push_back(s); 
   
    // iterator 'i' to get all adjacent vertices 
    list<int>::iterator i; 
   
    while(!queue.empty()) { 
        // dequeue the vertex 
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 
   
        // get all adjacent vertices of popped vertex and process each if not already visited 
        for (i = adjList[s].begin(); i != adjList[s].end(); ++i) { 
            if (!visited[*i]) { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
}

// void DiGraph::DFS(int v){
	    // // Mark the current node as visited and
	    // // print it
	    // visited[v] = true;
	    // cout << v << " ";
// 	
	    // // Recur for all the vertices adjacent
	    // // to this vertex
	    // list<int>::iterator i;
	    // for (i = adj[v].begin(); i != adj[v].end(); ++i)
	        // if (!visited[*i])
	            // DFS(*i);
	// }

int main(){
	int n, e;
	cin >> n >> e;
	vector<int> avec(e), bvec(e);
	
	for(int i = 0; i < 2*e; ++i){
		if(i % 2 == 0){
			cin >> avec[i/2];
		}else{
			cin >> bvec[i/2];
		}
	}
	
	DiGraph dg(n);
	
	for(int i = 0; i < e; ++i){
		dg.addEdge(avec[i], bvec[i]);
	}
	
	dg.BFS(0);
	// dg.DFS(0);
	
	
	return 0;
}
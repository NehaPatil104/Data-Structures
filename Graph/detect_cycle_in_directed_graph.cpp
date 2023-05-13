//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Cycle detection utility function
    bool checkCyclicDfs(int node, vector<int> adj[],  vector<bool> &visited, vector<bool> &dfsVisited){
        
        visited[node] = true;
        dfsVisited[node] = true;
        
        for(auto neighbour: adj[node]){
            if(!visited[neighbour]){
                bool checkCycle = checkCyclicDfs(neighbour, adj, visited, dfsVisited);
                if(checkCycle)
                    return true;
            }
            else if(dfsVisited[neighbour])
                return true;
        }
        
        dfsVisited[node] = false;
        return false;
    }
    
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        
        vector<bool> visited(V, false);
        vector<bool> dfsVisited(V, false);
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                bool checkCycle = checkCyclicDfs(i, adj, visited, dfsVisited);
                if(checkCycle)
                    return true;
            }
        }
        return false;
    }
    
    // Detect cycle using Kahn's Algorithm
    bool isCyclic(int V, vector<int> adj[]) {
        
        // Find indegree of all nodes
	    vector<int> indegree(V);
	    for(int i = 0; i < V; i++){
	        for(auto j : adj[i]){
	            indegree[j]++;
	        }
	    }
	    
	    // Insert the nodes with indegree 0 in queue
	    queue<int> q;
	    for(int i = 0; i < V; i++){
	        if(indegree[i] == 0)
	            q.push(i);
	    }
	    
	    // do bfs
	    int cnt = 0;

	    while(!q.empty()){
	        int front = q.front();
	        q.pop();
	        
	        cnt++;
	        
	        // Traverse all neighbours
	        for(int neighbour : adj[front]){
	            // Decrement the indegree of neighbour
	            indegree[neighbour]--;
	            
	            // If neighbour indegree is 0 then push in queue
	            if(indegree[neighbour] == 0){
	                q.push(neighbour);
	            }
	        }
	    }
	    
	    if(cnt == V)
	        return false;
	   
	   return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
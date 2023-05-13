//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	//Topological sort util function using DFS

	void topologicalSort(int node, vector<int> adj[], vector<bool> &visited,  stack<int> &s){
	    visited[node] = true;
	    
	    for(neighbour: adj[node]){
	        if(!visited[neighbour])
	            topologicalSort(neighbour, adj, visited, s);
	    }
	    
	    s.push(node);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool> visited(V);
	    vector<int> ans;
	    stack<int> s;
	    
	    for(int i = 0; i < V; i++){
	        if(!visited[i]){
	            topologicalSort(i, adj, visited, s);
	        }
	    }
	    
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    
	    return ans;
	}
	
	// Kahn's algorithm using BFS

	vector<int> topoSort(int V, vector<int> adj[]) {
	    
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
	    vector<int> ans;
	    while(!q.empty()){
	        int front = q.front();
	        q.pop();
	        
	        ans.push_back(front);
	        
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
	    return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends
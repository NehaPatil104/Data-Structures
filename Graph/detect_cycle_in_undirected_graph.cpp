//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool isCycleDetected(vector<int> adj[], unordered_map<int, bool> &visited, int i){
        
        unordered_map<int, int> parent;
        
        parent[i] = -1;
        visited[i] = true;
        
        queue<int> q;
        q.push(i);
        
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            
            for(auto neighbour : adj[frontNode]){
                if(visited[neighbour] == true && parent[frontNode] != neighbour)
                    return true;
                else if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                    parent[neighbour] = frontNode;
                }
            }
        }
        return false;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        unordered_map<int, bool> visited;
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                bool isCycle = isCycleDetected(adj, visited, i);
                if(isCycle)
                    return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
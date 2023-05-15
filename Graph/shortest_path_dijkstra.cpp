#include<unordered_map>
#include<set>
#include<list>
#include<limits>

#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {

    // create adjacency list
    unordered_map<int, list< pair<int, int> > > adj;
    for(int i = 0; i < edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    // create distance vector
    vector<int> dist(vertices);
    for(int i = 0; i < vertices; i++)
        dist[i] = INT_MAX;

    // create a set to store pair(dist, node)
    set<pair<int, int>> st;

    // Initialize the distance of source node
    dist[source] = 0;

    st.insert(make_pair(0,source));

    while(!st.empty()){

        // Fetch top node
        auto top = *(st.begin());

        int nodeDist = top.first;
        int topNode = top.second;

        // Remove the top node
        st.erase(st.begin());

        // Traverse on neighours
        for(auto neighours : adj[topNode]){
            if(nodeDist + neighours.second < dist[neighours.first]){
                // Find the record is in set
                auto record = st.find(make_pair(dist[neighours.first], neighours.first));

                // If record found in set erase it
                if(record != st.end()){
                    st.erase(record);
                }

                // Update the distance
                dist[neighours.first] = nodeDist + neighours.second;
                // Not found the record in set then add it to set
                st.insert(make_pair(dist[neighours.first], neighours.first));
            }
        }
    }
    return dist;
}

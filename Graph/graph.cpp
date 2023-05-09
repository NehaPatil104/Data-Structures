#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:
        unordered_map<int, list<int> > adj;

        void addEdge(int u, int v, bool direction){
            // 0 -> undirected graph
            // 1 -> directed graph

            // create an edge from u to v
            adj[u].push_back(v);

            //check if the graph is directed or not and add v->u edge
            if(!direction){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i : adj){
                cout<<i.first<<" -> ";
                for(auto j : i.second){
                    cout<<j<<", ";
                }
                cout<<"\n";
            }
        }
};

int main(){

    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    int m;
    cout<<"Enter number of edges: ";
    cin>>m;

    graph g;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    g.printAdjList();

    return 0;
}
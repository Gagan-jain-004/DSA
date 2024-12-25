#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


// implementation of of adjacency list 
/*
class graph{
    public:
          unordered_map<int,list<int> > adj;

          void addEdge(int u, int v, bool direction){
            //direction = 0 -> undirected graph 
            //direction = 1 ->  directed graph 

            // create an edge from u to v 
            adj[u].push_back(v);

            if(direction == 0){
                adj[u].push_back(u);
            }
          }

          void printAdjList(){
            for(auto i: adj){
                cout<<i.first<<"-> ";
                for(auto j: i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
          }
};



int main(){
    
    int n;
    cout<<"Enter the number of node "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges "<<endl;
    cin>>m;

    graph g;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        //creating an undirected graph 
        g.addEdge(u,v,0);
    }

    //printing graph
    g.printAdjList();
    return 0;
}


*/

// above solution using genric 

template <typename T>


class graph{
    public:
          unordered_map<T,list<T> > adj;

          void addEdge(T u, T v, bool direction){
            //direction = 0 -> undirected graph 
            //direction = 1 ->  directed graph 

            // create an edge from u to v 
            adj[u].push_back(v);

            if(direction == 0){
                adj[u].push_back(u);
            }
          }

          void printAdjList(){
            for(auto i: adj){
                cout<<i.first<<"-> ";
                for(auto j: i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
          }
};



int main(){
    
    int n;
    cout<<"Enter the number of node "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges "<<endl;
    cin>>m;

    graph<int> g;        // template ke case mai yahhan int mention krna jaruri hai 

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        //creating an undirected graph 
        g.addEdge(u,v,0);
    }

    //printing graph
    g.printAdjList();
    return 0;
}

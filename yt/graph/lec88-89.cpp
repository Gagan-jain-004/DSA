#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


//lec ---------------------------- 88
// cycle detection in undirected graph

// using bfs

/*

bool isCyclicBFS(int src, unordered_map<int,bool>visited, unordered_map<int,list<int> > adj){
    unordered_map<int,int>parent;

    parent[src]=-1;
    visited[src]=1;
    queue<int>q;
    q.push(src);

    while(!q.empty()){
        int front=q.front();
        q.pop();

        for(auto neighbour: adj[front]){
            if(visited[neighbour]== true && neighbour != parent[front]){
                return true;
            }
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour];
                parent[neighbour]= front;
            }
        }
    }

    return false;
}

string cycleDetection(vector<vector<int>> & edges,int n,int m){
    //create adjacency list

    unordered_map<int,list<int> > adj;

    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][i];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    
      // to handle disconnected components
      unordered_map<int,bool>visited;
      for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCyclicBFS(i,visited,adj);
            if(ans==1)
               return "Yes";
        }
      }
      return "No";
}
*/

//using dfs

/*

bool isCyclicDFS(int node,int parent,unordered_map<int,bool>visited,unordered_map<int,list<int> > adj;){
                  
                  visited[node]= true;

                  for(auto neighbour: adj[node]){
                    if(!visited[neighbour]){
                        bool cycleDetected = isCyclicDFS(neighbour,node,visited,adj);
                        if(cycleDetected)
                                return true;
                    }

                    else if(neighbour != parent){
                         //cycle present 
                         return true;
                    }
                  }
                  return false;
}
string cycleDetection(vector<vector<int>> & edges,int n,int m){
    //create adjacency list

    unordered_map<int,list<int> > adj;

    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][i];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    
      // to handle disconnected components
      unordered_map<int,bool>visited;
      for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCyclicDFS(i,-1,visited,adj);
          
            if(ans==1)
               return "Yes";

        }
      }
      return "No";
}

*/



//---------------------------    lec 89

// cycle detection in directed graph 

/*
bool checkCycleDFS(int node, unordered_map<int,bool> visited,
    unordered_map<int,bool>dfsVisited,unordered_map<int,list<int> >adj){

visited[node]=true;
dfsVisited[node]=true;

for(auto neighbour : adj[node]){
    if(!visited[neighbour]){
        bool cycleDetected= checkCycleDFS(neighbour,visited,djsVisited,adj);
        if(cycleDetected)
                  return true;
    }
    else if(dfsVisited[neighbour]){
        return true;
    }
}

dfsVisited[node]=false;
return false;
    }

int detectCycleInDirectedGraph(int n, vector<pair<int,int>>& edges){
    //create adj list
    unordered_map<int,list<int> >adj;
    for(int i=0; i<edges.size();i++){
        int u= edges[i].first;
        int v=  edges[i].second;

        adj[u].push_back(v);
    }

    //call dfs for all components

    unordered_map<int,bool> visited;
    unordered_map<int,bool>dfsVisited;

    for(int i=1; i<=n;i++){
        if(!visited[i]){
            bool cycleFound = checkCycleDFS(i,visited,dfsVisited,adj);
            if(cycleFound)
                    return true;
        }
    }
    return false;
}
*/
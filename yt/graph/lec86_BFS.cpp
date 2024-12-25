#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;

// bfs mai queue use hoti hai 


//bfs traversal
/*

void prepareAdjList(unorderd_map<int,list<int> > &adjList , vector<pair<int,int>>){
    for(int i=0;i<edges.size();i++){
        int  u= edges[i].first;
        int v= edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }

}

void bfs( unordered_map<int, list<int> > adjList,unordered_map<int,bool>&visited ,
          vector<int>&ans, int node){

            queue<int>q;
            q.push(node);
            visited[node]=1;

            while(!q.empty()){
                int frontNode= q.front();
                q.pop();

                //store frontNode into ans
                ans.push_back(frontNode);

                //traverse all neighbours of frontNode
                for(auto i: adjList[frontNode]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i]=1;
                    }
                }
            }
          }



vector<int> BFS(int vertex,vector<pair<int,int>> edges){
    unordered_map<int, list<int> > adjList;
    vector<int>ans;
    unordered_map<int,bool>visited;

    prepareAdjList(adjList,edges);

    //traverse all components of a graph
    for(int i=0; i<vertex;i++){
        if(!visited[i]){
            bfd(adjList,visited,ans,i);
        }
    }
    return ans;
}


*/
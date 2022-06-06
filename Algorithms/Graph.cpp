#include "Graph.h"

Graph::Graph(int numVertices){
  this->numVertices = numVertices;
  adjList.resize(numVertices);
}


Graph::~Graph(){}


void
Graph::addEdge(int location, int node){
  adjList[location].push_back(node);
}


std::string
Graph::printGraph(){
  std::string graph;
  for(size_t i = 0; i < adjList.size(); i++){
    graph += std::to_string(i) + " -> ";
    for(size_t k = 0; k < adjList[i].size(); k++){
      int val = adjList[i][k];
      graph += std::to_string(val) + " ";
    }
    graph += "\n";
  } 
  return graph;
}

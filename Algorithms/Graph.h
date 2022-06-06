#include <iostream>
#include <vector>
#include <list>
#include <string>

class Graph{

  // Adjacency List
  std::vector<std::vector<int>> adjList;

  public:

    Graph(int numVertices);
    ~Graph();

    // Add a vertex to location
    void addEdge(int location, int node);
    
    // Return string of graph visual
    std::string printGraph();

    // Graph Traversal Algorithms


  private:

    int numVertices;
};

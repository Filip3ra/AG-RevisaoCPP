#include "header.hpp"
#include <iostream>

Graph::Graph(int V)
{
  this->V = V;
  adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
  adj[v].push_back(w);
  adj[w].push_back(v); // Uncomment this line if it's an undirected graph
}

void Graph::printGraph()
{
  for (int v = 0; v < V; ++v)
  {
    std::cout << "Adjacency list of vertex " << v << "\n";
    std::cout << "head";
    for (auto x : adj[v])
      std::cout << " -> " << x;
    std::cout << std::endl;
  }
}

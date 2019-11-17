#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>
using namespace std;

struct vectex;
struct adjVertex{
  vertex *v;
  int weight;
};

struct vertex{
  vertex(){
    this->visited = false;
    this->distance = 0;
    this->previous = NULL;
  }
  string name;
  bool visited;
  int distance;
  vertex* previous;
  vector<adjVertex> adj;
};

class NewYork{
  private:
    vector<vertex*> vertices;
  public:
    void addEdge(string v1, string v2, int weight);
    void addVertex(string name);
    void displayEdges();
    void depthFirstTraversal(string sourceVertex);
    vertex* DijkstraAlgorithm(string start, string end);
    void directions(string start, string end);
    void setAllVerticesUnvisited();
};

#endif

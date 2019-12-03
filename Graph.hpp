#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>
using namespace std;

struct vertex;
struct adjVertex{
    vertex *v;
    int weight;
};

struct vertex{
    vertex() {
        this->visited = false;
        this->color = "";
        this->distance = 0;
    }
    string name;
    bool visited;
    string color;
    int distance;
    vertex *pred;
    vector<adjVertex> adj;
};

class NewYork{
  private:
    vector<vertex*> vertices;
  public:
    void addEdge(string v1, string v2, int weight);
    void addVertex(string name);
    void loadVertex();
    void loadEdges();
    void displayEdges(); //use this only for testing
    // void breadthFirstTraverse(string sourceVertex, string);
    vertex* searchGraph(string);
    vertex* DijkstraAlgorithm(string start, string end);
    void findStoreType(string, string);
    void printDirections(string start, string end);
};

#endif

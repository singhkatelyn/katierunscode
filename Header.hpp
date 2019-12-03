#ifndef HEADER_H
#define HEADER_H

#include <vector>
#include <iostream>
using namespace std;

struct vertex;
struct adjVertex{
    vertex *v;
    int weight;
};

struct intersection{
  string storeName;
  string storeType;
  intersection* next;
};

struct vertex{
    vertex() {
        this->visited = false;
        this->color = "";
        this->distance = 0;
    }
    intersection* head = NULL;
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
    vertex* searchGraph(string streetName);
    vertex* DijkstraAlgorithm(string start, string end);
    void findStoreType(string, string);
    void printDirections(string start, string end);
    intersection();
    bool isEmpty();
    void insertStore(store* previous, string storeName);
    store* searchStore(string storeName);
    void printStores();
};

#endif

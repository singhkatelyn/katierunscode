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
  //string storeType;
  intersection* next;
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
    intersection* head;
    vector<vertex*> vertices;

  public:
    NewYork();
    void addEdge(string v1, string v2, int weight);
    void addVertex(string name);
    void loadVertex();
    void loadEdges();
    void displayEdges(); //use this only for testing
    // void breadthFirstTraverse(string sourceVertex, string);
    vertex* searchGraph(string);
    vertex* DijkstraAlgorithm(string start, string end);
    void findStoreType(string, string);
    vector<string> printDirections(string start, string end);
    void printDirectionsOnly(vector<string>);
    bool isEmpty();
    intersection* insertStore(intersection* previous, string storeName);
    intersection* searchStore(string storeName);
    void printStores(string);
};

#endif

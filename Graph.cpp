#include "Graph.hpp"
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void Graph::addEdge(string v1, string v2, int num){
    for(unsigned int i = 0; i < vertices.size(); i++){
        if(vertices[i] -> name == v1){
            for(unsigned int j = 0; j < vertices.size(); j++){
                if(vertices[j] -> name == v2 && i != j){
                    adjVertex av;
                    av.v = vertices[j];
                    av.weight = num;
                    vertices[i]->adj.push_back(av);
                    //another vertex for edge in other direction
                    adjVertex av2;
                    av2.v = vertices[i];
                    av2.weight = num;
                    vertices[j]->adj.push_back(av2);
                }
            }
        }
    }
}

void Graph :: addVertex(string name){
  bool found = false;
    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i]->name == name){
            vertices[i] -> visted = true;
            found = true;
        }
    }
    if(found == false){
        vertex * newVertex = new vertex;
        newVertex->name = name;
        vertices.push_back(newVertex);
    }
}


void Graph :: loadVertex(){
  addVertex("8th/W45th");
  addVertex("8th/W44th");
  addVertex("8th/W43rd");
  addVertex("8th/W42nd");
  addVertex("8th/W41st");
  addVertex("8th/W40th");
  addVertex("8th/W39th");
  addVertex("8th/W38th");
  addVertex("8th/W37th");
  addVertex("8th/W36th");
  addVertex("8th/W35th");
  addVertex("8th/W34rd");
  addVertex("8th/W33rd");
  addVertex("8th/W32nd");
  addVertex("8th/W31st");
  addVertex("FashionAve/W45th");
  addVertex("FashionAve/W44th");
  addVertex("FashionAve/W43rd");
  addVertex("FashionAve/W42nd");
  addVertex("FashionAve/W41st");
  addVertex("FashionAve/W40th");
  addVertex("FashionAve/W39th");
  addVertex("FashionAve/W38th");
  addVertex("FashionAve/W37th");
  addVertex("FashionAve/W36th");
  addVertex("FashionAve/W35th");
  addVertex("FashionAve/W34th");
  addVertex("FashionAve/W33rd");
  addVertex("FashionAve/W32nd");
  addVertex("FashionAve/W31th");
  addVertex("6thAve/W45th");
  addVertex("6thAve/W44th");
  addVertex("6thAve/W43rd");
  addVertex("6thAve/W42nd");
  addVertex("6thAve/W41st");
  addVertex("6thAve/W40th");
  addVertex("6thAve/W39th");
  addVertex("6thAve/W38th");
  addVertex("6thAve/W37th");
  addVertex("6thAve/W36th");
  addVertex("6thAve/W35th");
  addVertex("6thAve/W34th");
  addVertex("6thAve/W33rd");
  addVertex("6thAve/W32nd");
  addVertex("6thAve/W31st");
  addVertex("5thAve/W45th");
  addVertex("5thAve/W44th");
  addVertex("5thAve/W43rd");
  addVertex("5thAve/W42nd");
  addVertex("5thAve/W41st");
  addVertex("5thAve/W40th");
  addVertex("5thAve/W39th");
  addVertex("5thAve/W38th");
  addVertex("5thAve/W37th");
  addVertex("5thAve/W36th");
  addVertex("5thAve/W35th");
  addVertex("5thAve/W34th");
  addVertex("5thAve/W33rd");
  addVertex("5thAve/W32nd");
  addVertex("5thAve/W31st");
  addVertex("MadisonAve/E45th");
  addVertex("MadisonAve/E44th");
  addVertex("MadisonAve/E43rd");
  addVertex("MadisonAve/E42nd");
  addVertex("MadisonAve/E41st");
  addVertex("MadisonAve/E40th");
  addVertex("MadisonAve/E39th");
  addVertex("MadisonAve/E38th");
  addVertex("MadisonAve/E37th");
  addVertex("MadisonAve/E36th");
  addVertex("MadisonAve/E35th");
  addVertex("MadisonAve/E34th");
  addVertex("MadisonAve/E33rd");
  addVertex("MadisonAve/E32nd");
  addVertex("MadisonAve/E31st");
  addVertex("ParkAve/E45th");
  addVertex("ParkAve/E44th");
  addVertex("ParkAve/E43rd");
  addVertex("ParkAve/E42nd");
  addVertex("ParkAve/E41st");
  addVertex("ParkAve/E40th");
  addVertex("ParkAve/E39th");
  addVertex("ParkAve/E38th");
  addVertex("ParkAve/E37th");
  addVertex("ParkAve/E36th");
  addVertex("ParkAve/E35th");
  addVertex("ParkAve/E34th");
  addVertex("ParkAve/E33rd");
  addVertex("ParkAve/E32nd");
  addVertex("ParkAve/E31st");
  addVertex("LexingtonAve/E45th");
  addVertex("LexingtonAve/E44th");
  addVertex("LexingtonAve/E43rd");
  addVertex("LexingtonAve/E42nd");
  addVertex("LexingtonAve/E41st");
  addVertex("LexingtonAve/E40th");
  addVertex("LexingtonAve/E39th");
  addVertex("LexingtonAve/E38th");
  addVertex("LexingtonAve/E37th");
  addVertex("LexingtonAve/E36th");
  addVertex("LexingtonAve/E35th");
  addVertex("LexingtonAve/E34th");
  addVertex("LexingtonAve/E33rd");
  addVertex("LexingtonAve/E32nd");
  addVertex("LexingtonAve/E31st");
  addVertex("3rdAve/E45th");
  addVertex("3rdAve/E44th");
  addVertex("3rdAve/E43rd");
  addVertex("3rdAve/E42nd");
  addVertex("3rdAve/E41st");
  addVertex("3rdAve/E40th");
  addVertex("3rdAve/E39th");
  addVertex("3rdAve/E38th");
  addVertex("3rdAve/E37th");
  addVertex("3rdAve/E36th");
  addVertex("3rdAve/E35th");
  addVertex("3rdAve/E34th");
  addVertex("3rdAve/E33rd");
  addVertex("3rdAve/E32nd");
  addVertex("3rdAve/E31st");
}

void Graph :: loadEdges(){
  addEdge("8thAve/45th","8thAve/44th");
  addEdge("8thAve/45th","FashionAve/45th");
  addEdge("8thAve/44th","8thAve/43rd");
  addEdge("8thAve/44th","FashionAve44th");
  addEdge("8thAve/43rd","8thAve/42nd");
  addEdge("8thAve/43rd","FashionAve/43rd");
  addEdge("8thAve/42nd","8thAve/41std");
  addEdge("8thAve/42nd","FashionAve/42nd");
  addEdge("8thAve/41st","8thAve/40th");
  addEdge("8thAve/41st","FashionAve/41st");
  addEdge("8thAve/40th","8thAve/39th");
  addEdge("8thAve/40th","FashionAve/40th");
  addEdge("8thAve/39th","8thAve/38th");
  addEdge("8thAve/39th","FashionAve/39th");
  addEdge("8thAve/38th","8thAve/37th");
  addEdge("8thAve/38th","FashionAve/38th");
  addEdge("8thAve/37th","8thAve/36th");
  addEdge("8thAve/37th","FashionAve/37th");
  addEdge("8thAve/36th","8thAve/35th");
  addEdge("8thAve/36th","FashionAve/36th");
  addEdge("8thAve/35th","8thAve/34th");
  addEdge("8thAve/35th","FashionAve/35th");
  addEdge("8thAve/34th","8thAve/33rd");
  addEdge("8thAve/34th","FashionAve/34th");
  addEdge("8thAve/33rd","8thAve/32nd");
  addEdge("8thAve/33rd","FashionAve/33rd");
  addEdge("8thAve/32nd","8thAve/31st");
  addEdge("8thAve/32nd","FashionAve/32nd");
  addEdge("8thAve/31st","FashionAve/31t");
}

void DFTraversalHelper(vertex* p){

  p->visited = true;

  for(unsigned int x = 0; x < p->adj.size(); x++ )
  {
      // TODO
      if(p->adj[x].v->visited == false)
      {
        cout << p->adj[x].v->name << " --> ";
        DFTraversalHelper(p->adj[x].v);
      }
  }
}
void Graph::depthFirstTraversal(string sourceVertex)
{
  vertex *n;
  for(unsigned int i = 0; i < vertices.size(); i++)
  {
      if(vertices[i]->name == sourceVertex)
      {
          n = vertices[i];
      }
  }
  cout << sourceVertex << " --> ";
  DFTraversalHelper(n);
  cout << "Done" << endl;
}

vertex* Graph::DijkstraAlgorithm(string start, string end)
{
 //start and end represent the beginning and ending vertices
 vertex *vStart;
 vertex *vEnd;
 vertex *s;
 vector<vertex*> solvedList;//holds vectors that have been solved
   for(unsigned int i = 0; i < vertices.size(); i++) //helper find start vertex
   {
         if (vertices[i]->name == start)//find the vStart vertex
         {
            vStart = vertices[i];
         }
         if (vertices[i]->name == end)//find the vStart vertex
         {
            vEnd = vertices[i];
         }
   }
   //now I have found the vertices for start and end
   vStart -> visited = true; //using visited variable as my solved
   vStart -> distance = 0;
   int dist;
   solvedList.push_back(vStart);
   while(!vEnd->visited)//go until the end has been visited
   {
     int minDist = INT_MAX;
     vertex* solvedV = NULL;
     for (unsigned int i = 0; i < solvedList.size(); i++)//iterate across list of solved vertices
     {
       s = solvedList[i];//s is a vertex in the solvedList - keep adding solvedV's until the problem is solved
       //now iterate across s's adj list
       for (unsigned int j = 0; j < s->adj.size(); j++)
       {
         if (s->adj[j].v->visited == false)//if it has never been visited/solved
         {
           dist = s->distance + s->adj[j].weight;//find the distance
           if (dist < minDist)//check the distance versus the minDistance
           {
             minDist = dist; //change what the minDistance is
             solvedV = s->adj[j].v;//set null vertex equal to vertex with the minDistance
             s->adj[j].v->pred = s;
           }
         }

       }//closes the j for loop
     }//closes the i for loop
     solvedV->distance = minDist;//set solvedV's attributes
     solvedV->visited = true;
     solvedList.push_back(solvedV);//add solvedV to solvedList
   }//closes while loop
   return vEnd;
}


void Graph :: printDirections(string s1, string s2){
  vector<string> solvedList;
  vertex* n = DijkstraAlgorithm(s1, s2);
  while(n->name != s1){
    solvedList.push_back(n->name);
    n = n-> pred;
  }
  solvedList.push_back(s1);
  int counter = 0;
  for(unsigned int x = solvedList.size(); x > 0; x--){
    if(counter == 0){
        cout << s1 << " ";
        counter++;
        x--;
    }
    else{
      cout << solvedList[x] << " ";
    }

  }
  cout << s2 << endl;
}

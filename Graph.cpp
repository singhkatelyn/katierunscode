#include "Header.hpp"
#include <iostream>
#include <vector>
#include <climits>

using namespace std;


NewYork :: NewYork(){
  head = NULL;
}

bool NewYork ::isEmpty(){
  if(head == NULL){
    return true;
  }
  return false;
}

void NewYork::insertStore(store* previous, string storeName){
  intersection* temp;
  if (previous == NULL){
    cout << "adding: " << storeName << " (HEAD)" << endl; //comment out after testing is done
    temp = head;
    head = new intersection;
    head -> name = storeName;
    head -> next = temp;
  }
  else if (head == NULL){
    cout << "adding: " << storeName << " (HEAD)" << endl; //comment out after testing is done
    head = new intersection;
    head -> name = storeName;
    head -> next = NULL;
  }
  else{
    cout << "adding: " << storeName << " (prev: " << previous -> name << ")" << endl; //comment out after testing is done
    temp = new intersection;
    temp -> next = previous -> next; //a to c now b to c
    previous -> next = temp; //a to b
    temp -> name = storeName; //fill
  }
}

intersection* NewYork::searchStore(string storeName){
  intersection *craweler = head;
	while(craweler != NULL){
    if(craweler -> name == storeName){
      return craweler;
    }
		craweler = craweler -> next;
	}
  return NULL;
}

void NewYork::printStores() {
  intersection*temp = head;
  int counter = 0;
  if(temp == NULL){
    cout << "nothing in path" << endl;
  }
	while(temp != NULL){
		cout << counter << ". " << temp -> name << endl;
    counter++;
  cout << "===" << endl;
}


void NewYork::addEdge(string v1, string v2, int num){
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

void NewYork :: addVertex(string name){
  bool found = false;
    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i]->name == name){
            vertices[i] -> visited = true;
            found = true;
        }
    }
    if(found == false){
        vertex * newVertex = new vertex;
        newVertex->name = name;
        vertices.push_back(newVertex);
    }
}


void NewYork :: loadVertex(){
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
  addVertex("5thAve/E42nd");
  addVertex("5thAve/E41st");
  addVertex("5thAve/E40th");
  addVertex("5thAve/E39th");
  addVertex("5thAve/E38th");
  addVertex("5thAve/E37th");
  addVertex("5thAve/E36th");
  addVertex("5thAve/E35th");
  addVertex("5thAve/E34th");
  addVertex("5thAve/E33rd");
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
}

void NewYork :: loadEdges(){
  addEdge("8thAve/42nd","8thAve/W41std", rand() % 10 + 1);
  addEdge("8thAve/42nd","FashionAve/W42nd", rand() % 10 + 1);
  addEdge("8thAve/41st","8thAve/W40th", rand() % 10 + 1);
  addEdge("8thAve/41st","FashionAve/W41st", rand() % 10 + 1);
  addEdge("8thAve/40th","8thAve/W39th", rand() % 10 + 1);
  addEdge("8thAve/40th","FashionAve/W40th", rand() % 10 + 1);
  addEdge("8thAve/39th","8thAve/W38th", rand() % 10 + 1);
  addEdge("8thAve/39th","FashionAve/W39th", rand() % 10 + 1);
  addEdge("8thAve/38th","8thAve/W37th", rand() % 10 + 1);
  addEdge("8thAve/38th","FashionAve/W38th", rand() % 10 + 1);
  addEdge("8thAve/37th","8thAve/W36th", rand() % 10 + 1);
  addEdge("8thAve/37th","FashionAve/W37th", rand() % 10 + 1);
  addEdge("8thAve/36th","8thAve/W35th", rand() % 10 + 1);
  addEdge("8thAve/36th","FashionAve/W36th", rand() % 10 + 1);
  addEdge("8thAve/35th","8thAve/W34th", rand() % 10 + 1);
  addEdge("8thAve/35th","FashionAve/W35th", rand() % 10 + 1);
  addEdge("8thAve/34th","8thAve/W33rd", rand() % 10 + 1);
  addEdge("8thAve/34th","FashionAve/W34th", rand() % 10 + 1);
  addEdge("8thAve/33rd","FashionAve/W33rd", rand() % 10 + 1);
  addEdge("FashionAve/W43rd","FashionAve/W42nd", rand() % 10 + 1);
  addEdge("FashionAve/W42nd","6thAve/W42nd", rand() % 10 + 1);
  addEdge("FashionAve/W42nd","FashionAve/W41st", rand() % 10 + 1);
  addEdge("FashionAve/W41st","6thAve/W41st", rand() % 10 + 1);
  addEdge("FashionAve/W41st","FashionAve/W40th", rand() % 10 + 1);
  addEdge("FashionAve/W40th","6thAve/W40th", rand() % 10 + 1);
  addEdge("FashionAve/W40th","FashionAve/W39th", rand() % 10 + 1);
  addEdge("FashionAve/W39th","6thAve/W39th", rand() % 10 + 1);
  addEdge("FashionAve/W39th","FashionAve/W38th", rand() % 10 + 1);
  addEdge("FashionAve/W38th","6thAve/W38th", rand() % 10 + 1);
  addEdge("FashionAve/W38th","FashionAve/W37th", rand() % 10 + 1);
  addEdge("FashionAve/W37th","6thAve/W37th", rand() % 10 + 1);
  addEdge("FashionAve/W37th","FashionAve/W36th", rand() % 10 + 1);
  addEdge("FashionAve/W36th","6thAve/W36th", rand() % 10 + 1);
  addEdge("FashionAve/W36th","FashionAve/W35th", rand() % 10 + 1);
  addEdge("FashionAve/W35th","6thAve/W35th", rand() % 10 + 1);
  addEdge("FashionAve/W35th","FashionAve/W34th", rand() % 10 + 1);
  addEdge("FashionAve/W34th","6thAve/W34th", rand() % 10 + 1);
  addEdge("FashionAve/W34th","FashionAve/W33rd", rand() % 10 + 1);
  addEdge("FashionAve/W33rd","6thAve/W33rd", rand() % 10 + 1);
  addEdge("6thAve/W42nd", "5thAve/W42nd", rand() % 10 + 1);
  addEdge("6thAve/W42nd", "6thAve/W41st", rand() % 10 + 1);
  addEdge("6thAve/W41st", "5thAve/W41st", rand() % 10 + 1);
  addEdge("6thAve/W41st", "6thAve/W40th", rand() % 10 + 1);
  addEdge("6thAve/W40th", "5thAve/W40th", rand() % 10 + 1);
  addEdge("6thAve/W40th", "6thAve/W39th", rand() % 10 + 1);
  addEdge("6thAve/W39th", "5thAve/W39th", rand() % 10 + 1);
  addEdge("6thAve/W39th", "6thAve/W38th", rand() % 10 + 1);
  addEdge("6thAve/W38th", "5thAve/W38th", rand() % 10 + 1);
  addEdge("6thAve/W38th", "6thAve/W37th", rand() % 10 + 1);
  addEdge("6thAve/W37th", "5thAve/W37th", rand() % 10 + 1);
  addEdge("6thAve/W37th", "6thAve/W36th", rand() % 10 + 1);
  addEdge("6thAve/W36th", "5thAve/W36th", rand() % 10 + 1);
  addEdge("6thAve/W36th", "6thAve/W35th", rand() % 10 + 1);
  addEdge("6thAve/W35th", "5thAve/W35th", rand() % 10 + 1);
  addEdge("6thAve/W35th", "6thAve/W34th", rand() % 10 + 1);
  addEdge("6thAve/W34th", "5thAve/W34th", rand() % 10 + 1);
  addEdge("6thAve/W34th", "6thAve/W33rd", rand() % 10 + 1);
  addEdge("6thAve/W33rd", "5thAve/W33rd", rand() % 10 + 1);
  addEdge("5thAve/W42nd","5thAve/E42nd", 0); //connects the east and west streets together, this is actually supposed to be 1 node so that is why the weight is 0
  addEdge("5thAve/W41st","5thAve/E41st", 0);
  addEdge("5thAve/W40th","5thAve/E40th", 0);
  addEdge("5thAve/W39th","5thAve/E39th", 0);
  addEdge("5thAve/W38th","5thAve/E38th", 0);
  addEdge("5thAve/W37th","5thAve/E37th", 0);
  addEdge("5thAve/W36th","5thAve/E36th", 0);
  addEdge("5thAve/W35th","5thAve/E35th", 0);
  addEdge("5thAve/W34th","5thAve/E34th", 0);
  addEdge("5thAve/W33th","5thAve/E33th", 0);
  addEdge("5thAve/E42nd", "MadisonAve/E42nd", rand() % 10 + 1);
  addEdge("5thAve/E42nd", "5thAve/E41st", rand() % 10 + 1);
  addEdge("5thAve/E41st", "MadisonAve/E41st", rand() % 10 + 1);
  addEdge("5thAve/E41st", "5thAve/E40th", rand() % 10 + 1);
  addEdge("5thAve/E40th", "MadisonAve/E40th", rand() % 10 + 1);
  addEdge("5thAve/E40th", "5thAve/E39th", rand() % 10 + 1);
  addEdge("5thAve/E39th", "MadisonAve/E39th", rand() % 10 + 1);
  addEdge("5thAve/E39th", "5thAve/E38th", rand() % 10 + 1);
  addEdge("5thAve/E38th", "MadisonAve/E38th", rand() % 10 + 1);
  addEdge("5thAve/E38th", "5thAve/E37th", rand() % 10 + 1);
  addEdge("5thAve/E37th", "MadisonAve/E37th", rand() % 10 + 1);
  addEdge("5thAve/E37th", "5thAve/E36th", rand() % 10 + 1);
  addEdge("5thAve/E36th", "MadisonAve/E36th", rand() % 10 + 1);
  addEdge("5thAve/E36th", "5thAve/E35th", rand() % 10 + 1);
  addEdge("5thAve/E35th", "MadisonAve/E35th", rand() % 10 + 1);
  addEdge("5thAve/E35th", "5thAve/E34th", rand() % 10 + 1);
  addEdge("5thAve/E34th", "MadisonAve/E34th", rand() % 10 + 1);
  addEdge("5thAve/E34th", "5thAve/E33rd", rand() % 10 + 1);
  addEdge("5thAve/E33rd", "MadisonAve/E33rd", rand() % 10 + 1);
  addEdge("MadisonAve/E42nd", "ParkAve/E42nd", rand() % 10 + 1);
  addEdge("MadisonAve/E42nd", "MadisonAve/E41st", rand() % 10 + 1);
  addEdge("MadisonAve/E41st", "ParkAve/E41st", rand() % 10 + 1);
  addEdge("MadisonAve/E41st", "MadisonAve/E40th", rand() % 10 + 1);
  addEdge("MadisonAve/E40th", "ParkAve/E40th", rand() % 10 + 1);
  addEdge("MadisonAve/E40th", "MadisonAve/E39th", rand() % 10 + 1);
  addEdge("MadisonAve/E39th", "ParkAve/E39th", rand() % 10 + 1);
  addEdge("MadisonAve/E39th", "MadisonAve/E38th", rand() % 10 + 1);
  addEdge("MadisonAve/E38th", "ParkAve/E38th", rand() % 10 + 1);
  addEdge("MadisonAve/E38th", "MadisonAve/E37th", rand() % 10 + 1);
  addEdge("MadisonAve/E37th", "ParkAve/E37th", rand() % 10 + 1);
  addEdge("MadisonAve/E37th", "MadisonAve/E36th", rand() % 10 + 1);
  addEdge("MadisonAve/E36th", "ParkAve/E36th", rand() % 10 + 1);
  addEdge("MadisonAve/E36th", "MadisonAve/E35th", rand() % 10 + 1);
  addEdge("MadisonAve/E35th", "ParkAve/E35th", rand() % 10 + 1);
  addEdge("MadisonAve/E35th", "MadisonAve/E34th", rand() % 10 + 1);
  addEdge("MadisonAve/E34th", "ParkAve/E34th", rand() % 10 + 1);
  addEdge("MadisonAve/E34th", "MadisonAve/E33rd", rand() % 10 + 1);
  addEdge("MadisonAve/E33rd", "ParkAve/E33rd", rand() % 10 + 1);
  addEdge("ParkAve/E42nd", "LexingtonAve/E42nd", rand() % 10 + 1);
  addEdge("ParkAve/E42nd", "ParkAve/E41st", rand() % 10 + 1);
  addEdge("ParkAve/E41st", "LexingtonAve/E41st", rand() % 10 + 1);
  addEdge("ParkAve/E41st", "ParkAve/E40th", rand() % 10 + 1);
  addEdge("ParkAve/E40th", "LexingtonAve/E40th", rand() % 10 + 1);
  addEdge("ParkAve/E40th", "ParkAve/E39th", rand() % 10 + 1);
  addEdge("ParkAve/E39th", "LexingtonAve/E39th", rand() % 10 + 1);
  addEdge("ParkAve/E39th", "ParkAve/E38th", rand() % 10 + 1);
  addEdge("ParkAve/E38th", "LexingtonAve/E38th", rand() % 10 + 1);
  addEdge("ParkAve/E38th", "ParkAve/E37th", rand() % 10 + 1);
  addEdge("ParkAve/E37th", "LexingtonAve/E37th", rand() % 10 + 1);
  addEdge("ParkAve/E37th", "ParkAve/E36th", rand() % 10 + 1);
  addEdge("ParkAve/E36th", "LexingtonAve/E36th", rand() % 10 + 1);
  addEdge("ParkAve/E36th", "ParkAve/E35th", rand() % 10 + 1);
  addEdge("ParkAve/E35th", "LexingtonAve/E35th", rand() % 10 + 1);
  addEdge("ParkAve/E35th", "ParkAve/E34th", rand() % 10 + 1);
  addEdge("ParkAve/E34th", "LexingtonAve/E34th", rand() % 10 + 1);
  addEdge("ParkAve/E34th", "ParkAve/E33rd", rand() % 10 + 1);
  addEdge("ParkAve/E33rd", "LexingtonAve/E33rd", rand() % 10 + 1);
  addEdge("LexingtonAve/E42nd", "3rdAve/E42nd", rand() % 10 + 1);
  addEdge("LexingtonAve/E42nd", "LexingtonAve/E41st", rand() % 10 + 1);
  addEdge("LexingtonAve/E41st", "3rdAve/E41st", rand() % 10 + 1);
  addEdge("LexingtonAve/E41st", "LexingtonAve/E40th", rand() % 10 + 1);
  addEdge("LexingtonAve/E40th", "3rdAve/E40th", rand() % 10 + 1);
  addEdge("LexingtonAve/E40th", "LexingtonAve/E39th", rand() % 10 + 1);
  addEdge("LexingtonAve/E39th", "3rdAve/E39th", rand() % 10 + 1);
  addEdge("LexingtonAve/E39th", "LexingtonAve/E38th", rand() % 10 + 1);
  addEdge("LexingtonAve/E38th", "3rdAve/E38th", rand() % 10 + 1);
  addEdge("LexingtonAve/E38th", "LexingtonAve/E37th", rand() % 10 + 1);
  addEdge("LexingtonAve/E37th", "3rdAve/E37th", rand() % 10 + 1);
  addEdge("LexingtonAve/E37th", "LexingtonAve/E36th", rand() % 10 + 1);
  addEdge("LexingtonAve/E36th", "3rdAve/E36th", rand() % 10 + 1);
  addEdge("LexingtonAve/E36th", "LexingtonAve/E35th", rand() % 10 + 1);
  addEdge("LexingtonAve/E35th", "3rdAve/E35th", rand() % 10 + 1);
  addEdge("LexingtonAve/E35th", "LexingtonAve/E34th", rand() % 10 + 1);
  addEdge("LexingtonAve/E34th", "3rdAve/E34th", rand() % 10 + 1);
  addEdge("LexingtonAve/E34th", "LexingtonAve/E33rd", rand() % 10 + 1);
  addEdge("LexingtonAve/E33rd", "3rdAve/E33rd", rand() % 10 + 1);
  addEdge("3rdAve/E42nd", "3rdAve/E41st", rand() % 10 + 1);
  addEdge("3rdAve/E41st", "3rdAve/E40th", rand() % 10 + 1);
  addEdge("3rdAve/E40th", "3rdAve/E39th", rand() % 10 + 1);
  addEdge("3rdAve/E39th", "3rdAve/E38th", rand() % 10 + 1);
  addEdge("3rdAve/E38th", "3rdAve/E37th", rand() % 10 + 1);
  addEdge("3rdAve/E37th", "3rdAve/E36th", rand() % 10 + 1);
  addEdge("3rdAve/E36th", "3rdAve/E35th", rand() % 10 + 1);
  addEdge("3rdAve/E35th", "3rdAve/E34th", rand() % 10 + 1);
  addEdge("3rdAve/E34th", "3rdAve/E33rd", rand() % 10 + 1);
}



void NewYork :: displayEdges(){
  for(unsigned int i = 0; i < vertices.size(); i++){
    cout << vertices[i] -> name << " --> ";
    for(unsigned int j = 0; j < vertices[i] -> adj.size(); j++){
       cout << vertices[i]->adj[j].v->name << " ";
    }
    cout << endl;
  }
}

// void NewYork :: breadthFirstTraverse(string sourceVertex, string storeType){
//   queue<vertex*> q;
//   vertex *vStart;
//   cout<< "Starting vertex (root): " << sourceVertex << "-> "; //keep for testing
//   vertex *n;
//   for(unsigned int i = 0; i < vertices.size(); i++)
//   {
//       if(vertices[i]->name == sourceVertex)
//       {
//           vStart = vertices[i];
//       }
//   }
//   q.push(vStart);
//   vStart->visited = true;
//   store* temp;
//   temp = vStart->head;
//   while(!temp){
//     if(temp -> storeType == storeType){
//       cout << "The closest " << storeType << " is at " << sourceVertex << endl;
//       printDirections(sourceVertex, sourceVertex);
//       break;
//       //call the firections from here and end the code
//     }
//   }
//   while(!q.empty()){
//       n = q.front();
//       q.pop();
//       // go to all the adjacent vertices of n
//       for(unsigned int x = 0; x < n->adj.size(); x++)
//       {
//         if(n->adj[x].v->visited == false){
//           n->adj[x].v->visited = true;
//           n->adj[x].v->distance = n->distance + 1;
//           temp = n->adj[x].v->head;
//           while(!temp){
//             if(temp -> storeType == storeType){
//               cout << "The closest " << storeType << " is at " << n->adj[x].v->name << endl;
//               string name = n->adj[x].v->name.str();
//               printDirections(sourceVertex, n->adj[x].v->name); //this is gonna give an error
//               break;
//               //call directions and stop running the code
//             }
//           }
//           q.push(n->adj[x].v);
//           cout << n->adj[x].v->name <<"("<< n->adj[x].v->distance <<")"<< " ";
//         }
//       }
//   }
// }
// void NewYork :: findStoreType(string start, string storeType){
//   store* intersection;
//   breadthFirstTraverse(start, storeType);
// }

vertex* NewYork :: searchGraph(string streetName){
  //find the street name and return the intersection vertex
  vertex* street;
  for(unsigned int i = 0; i < vertices.size(); i++){
      if(vertices[i]->name == streetName)
      {
        return street = vertices[i];
      }
  }
  return 0;
}

void NewYork::insertStore(store* previous, string storeName){
  intersection* temp;
  if (previous == NULL){
    cout << "adding: " << storeName << " (HEAD)" << endl; //comment out after testing is done
    temp = head;
    head = new intersection;
    head -> name = storeName;
    head -> next = temp;
  }
  else if (head == NULL){
    cout << "adding: " << storeName << " (HEAD)" << endl; //comment out after testing is done
    head = new intersection;
    head -> name = storeName;
    head -> next = NULL;
  }
  else{
    cout << "adding: " << storeName << " (prev: " << previous -> name << ")" << endl; //comment out after testing is done
    temp = new intersection;
    temp -> next = previous -> next; //a to c now b to c
    previous -> next = temp; //a to b
    temp -> name = storeName; //fill
  }
}

vertex* NewYork::DijkstraAlgorithm(string start, string end)
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



void NewYork :: printDirections(string s1, string s2){
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

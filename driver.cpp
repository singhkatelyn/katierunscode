#include <iostream>
#include <vector>
#include "Graph.hpp"
#include "LinkedList.hpp"
using namespace std;

int main()
{
  string EWStCurr;
  string NSStCurr;
  string EWSt;
  string NSSt;
  string startV;
  string endV;

//declare an object of the LL class type

  Graph g;
  g.loadVertex();
  g.loadEdges();
  /*
  //load in graph verticies

    g.addVertex(0); //8th and 45th
    g.addVertex(1); //8th and 44th
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(5);
    g.addVertex(6);

    //connect adj vertices
    //assign weights (time values)
      //if a larger road less time
      //if near big touristy things more time
    g.addEdge(0, 1); //8th and 45th/8th and 44th
    g.addEdge(1, 2); //8th and 45th/fashion and 45th
    g.addEdge(2, 0);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(1, 6);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    */
    //read in from file
    //while(getline())
    //{
      //fill LL at each vertex of the graph (intersection)
    //}


    cout << "Enter the street you are on that runs North to South. Use the form 'StreetNameAve' e.i. '8thAve' or 'FashionAve'." << endl;
    cin >> NSStCurr;
    cout << "Enter the street you are on that runs East to West. Use the form 'FIRST_LETTER_OF_CARINAL_DIRECTIONSTREET_NUMBER_superscript' e.i. 'W45th' or 'E31st'." << endl;
    cin >> EWStCurr;

    //use the two inputs to locate the exact vetex (startV)


    cout << "Enter the street you want to go to that runs North to South. Use the form 'StreetNameAve' e.i. '8thAve' or 'FashionAve'." << endl;
    cin >> NSSt;
    cout << "Enter the street you want to go to that runs East to West. Use the form 'FIRST_LETTER_OF_CARINAL_DIRECTIONSTREET_NUMBER_superscript' e.i. 'W45th' or 'E31st'." << endl;
    cin >> EWSt;

    //use the two inputs to locate the exact vetex (endV)

    //find shortest path
    //inside printDirections, DijkstraAlgorithm will be run to find the shortest path possible
    g.printDirections(NSSt, EWSt); //prints the directions to get to the final location


    //display what is in the LL from that node


  return 0;
}

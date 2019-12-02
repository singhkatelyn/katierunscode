#include <iostream>
#include <vector>
#include <sstream>
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
  LinkedList l;
//declare an object of Graph class type
  Graph g;
  g.loadVertex();
  g.loadEdges();
  int counter = 0;
  
  //declare string to hold the stores from file
  string line;
  string store;
  string intersection;
  
  //declare things to be passed into insertStore
  store* prev;
  string storeName;
  
  ifstream fin("ShopInfo.csv"); //assign the csv file to fin
  //read in from file
  if(fin.is_open())
  {
    while(getline(fin, line))//read in line by line
    {
      sringstream ss(line); //use string stream to separate words
      getline(ss, intersection, ',');
      counter++;//note that the first word is added
      //search the graph for "intersection"
      //g.search(intersection);
      //to find the vertex in which the linked list will be attached
      while(coutner > 0 && ss != "NULL") //after the first word then add the words to the linked list
      {
        getline(ss, store, ',');
        //add store to LL
        l.insertStore(prev, storeName);
        //vertex struct in graph: name of intersection + LL
      }
    }
  }

  //if the words being read in matches the word while traversing (search for that word) then add to the linked list
  //combine first two words into 1
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

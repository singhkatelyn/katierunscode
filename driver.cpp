#include <iostream>
#include <vector>
#include <sstream>
#include "Graph.hpp"
#include "LinkedList.hpp"
using namespace std;

int main(int argc, char *argv[]) //1: .csv
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
  
  //declare string to hold the stores from file
  string word; 
  
  //declare things to be passed into insertStore
  store* prev;
  string storeName;
  
  ifstream fin(argv[1]); //assign the csv file to fin
  //read in from file
  if(fin.is_open())
  {
    while(getline(fin, stores))//read in line by line
    {
      sringstream ss(stores); //use string stream to separate words
      while(ss >> word) //what am I doing here
      {
        if(word != "NULL")//fill linked list with words until NULL??
        {
          
        }
      }
      //fill LL at each vertex of the graph (intersection)
      l.insertStore(prev, storeName);
    }
  }

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

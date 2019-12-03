#include <iostream>
#include <vector>
#include <sstream>
#include "Header.hpp"
#include<string>
using namespace std;

int main()
{
  //what the user types in
  string EWStCurr;//the street you're on
  string NSStCurr;//the steet you're on
  string EWSt;//the street going to
  string NSSt;//the street going to
  string startV; //combine the words
  string endV; //combine the words

//if user wants to keep going
  string response = "Y";

//declare an object of the LL class type
//declare an object of Graph class type
  Header h; //SHOULD IT BE HEADER* ??
//create graph
  h.loadVertex();
  h.loadEdges();

//vertex of the street that the words that will be added to the LL to be passed into insertStore
  intersection* vertexOfInt;

//declare string what you're reading in from file
  string line;
  string store;
  string intersection;

  ifstream fin("ShopInfo.csv"); //open the file
  //read in from file
  if(fin.is_open())
  {
    while(getline(fin, line))//read in line by line
    {
      //initialize a counter to keep track of what you're reading in from file
      int counter = 0;
      stringstream ss(line); //use string stream to separate words in that line
      getline(ss, intersection, ','); //at each line the first word is the intersection
      counter++;//note that the first word is added
      //search the graph for "intersection"
      //to find the vertex in which the linked list will be attached
      vertexOfInt = h.searchGraph(intersection);

      //after the first word then add the words to the linked list until the word is NULL
      while(counter > 0 && store != "NULL")
      {
        getline(ss, store, ',');
        //add store to LL
        h.insertStore(vertexOfInt, store);
        //vertex struct in graph: name of intersection + LL
      }
    }
  }

  while(response == "Y" || response == "N")
  {
    cout << "Enter the street you are on that runs North to South. Use the form 'StreetNameAve' e.i. '8thAve' or 'FashionAve'." << endl;
    cin >> NSStCurr;
    cout << "Enter the street you are on that runs East to West. Use the form 'FIRST_LETTER_OF_CARINAL_DIRECTIONSTREET_NUMBER_superscript' e.i. 'W45th' or 'E31st'." << endl;
    cin >> EWStCurr;


    //use the two inputs to locate the exact vetex (startV)
    startV = NSStCurr + "/" + EWStCurr;

    cout << "Enter the street you want to go to that runs North to South. Use the form 'StreetNameAve' e.i. '8thAve' or 'FashionAve'." << endl;
    cin >> NSSt;
    cout << "Enter the street you want to go to that runs East to West. Use the form 'FIRST_LETTER_OF_CARINAL_DIRECTIONSTREET_NUMBER_superscript' e.i. 'W45th' or 'E31st'." << endl;
    cin >> EWSt;

    //use the two inputs to locate the exact vetex (endV)
    endV = NSSt + "/" + EWSt;

    cout << "Directions to the intersection at " << NSSt << " and " << EWSt << ": " << endl;
    //find shortest path
    //inside printDirections, DijkstraAlgorithm will be run to find the shortest path possible
    h.printDirections(startV, endV); //prints the directions to get to the final location

    cout << "Nearby shops, restaurants, entertainment, and parks: " << endl;
    //display what is in the LL from that node
    h.prints(); //DOES THIS PRINT JUST FROM THE FINAL DESTINATION???

    cout << "Would you like to map to a different intersection? Type Y or N" << endl;
    cin >> response;
    if(response != "Y" || response != "y" ||response != "N" || response != "n")
    {
      cout << "Error: not a valid response. Please enter Y or N" << endl;
      cin >> response;
    }
    if(response == "N" || response == "n")
    {
      cout << "Have a safe trip to the intersection of " << NSSt << " and " << EWSt << "." << endl;
      break;
    }
  }
  return 0;
}

#include <iostream>
#include <vector>
#include <sstream>
#include "Header.hpp"
#include<fstream>
#include<string>
using namespace std;


void printStreetNames(){
  // string fourTwo[8] = {"8thAve/W42nd", "FashionAve/W42nd", "6thAve/W42nd", "5thAve/E42nd", "MadisonAve/E42nd", "ParkAve/E42nd", "LexingtonAve/E42nd", "3rdAve/E42nd"};
  // string fourOne[8] = {"8thAve/W41st", "FashionAve/W41st", "6thAve/W41st", "5thAve/E41st", "MadisonAve/E41st", "ParkAve/E41st", "LexingtonAve/E41st", "3rdAve/E41st"};
  // string fourZero[8] = {"8thAve/W40th", "FashionAve/W40th", "6thAve/W40th", "5thAve/E40th", "MadisonAve/E40th", "ParkAve/E40th", "LexingtonAve/E40th", "3rdAve/E40th"};
  // string threeNine[8] = {"8thAve/W39th", "FashionAve/W39th", "6thAve/W39th", "5thAve/E39th", "MadisonAve/E39th", "ParkAve/E39th", "LexingtonAve/E39th", "3rdAve/E39th"};
  // string threeEight[8] = {"8thAve/W38th", "FashionAve/W38th", "6thAve/W38th", "5thAve/E38th", "MadisonAve/E38th", "ParkAve/E38th", "LexingtonAve/E38th", "3rdAve/E38th"};
  // string threeSeven[8] = {"8thAve/W37th", "FashionAve/W37th", "6thAve/W37th", "5thAve/E37th", "MadisonAve/E37th", "ParkAve/E37th", "LexingtonAve/E37th", "3rdAve/E37th"};
  // string threeSix[8] = {"8thAve/W36th", "FashionAve/W36th", "6thAve/W36th", "5thAve/E36th", "MadisonAve/E36th", "ParkAve/E36th", "LexingtonAve/E36th", "3rdAve/E36th"};
  // string threeFive[8] = {"8thAve/W35th", "FashionAve/W35th", "6thAve/W35th", "5thAve/E35th", "MadisonAve/E35th", "ParkAve/E35th", "LexingtonAve/E35th", "3rdAve/E35th"};
  // string threeFour[8] = {"8thAve/W34th", "FashionAve/W34th", "6thAve/W34th", "5thAve/E34th", "MadisonAve/E34th", "ParkAve/E34th", "LexingtonAve/E34th", "3rdAve/E34th"};
  // string threeThree[8] = {"8thAve/W33rd", "FashionAve/W33rd", "6thAve/W33rd", "5thAve/E33rd", "MadisonAve/E33rd", "ParkAve/E33rd", "LexingtonAve/E33rd", "3rdAve/E33rd"};
  string streets[9][8] = {{"8thAve/W42nd", "FashionAve/W42nd", "6thAve/W42nd", "5thAve/E42nd", "MadisonAve/E42nd", "ParkAve/E42nd", "LexingtonAve/E42nd", "3rdAve/E42nd"},
   {"8thAve/W41st", "FashionAve/W41st", "6thAve/W41st", "5thAve/E41st", "MadisonAve/E41st", "ParkAve/E41st", "LexingtonAve/E41st", "3rdAve/E41st"},
   {"8thAve/W40th", "FashionAve/W40th", "6thAve/W40th", "5thAve/E40th", "MadisonAve/E40th", "ParkAve/E40th", "LexingtonAve/E40th", "3rdAve/E40th"},
   {"8thAve/W39th", "FashionAve/W39th", "6thAve/W39th", "5thAve/E39th", "MadisonAve/E39th", "ParkAve/E39th", "LexingtonAve/E39th", "3rdAve/E39th"},
    {"8thAve/W38th", "FashionAve/W38th", "6thAve/W38th", "5thAve/E38th", "MadisonAve/E38th", "ParkAve/E38th", "LexingtonAve/E38th", "3rdAve/E38th"},
     {"8thAve/W37th", "FashionAve/W37th", "6thAve/W37th", "5thAve/E37th", "MadisonAve/E37th", "ParkAve/E37th", "LexingtonAve/E37th", "3rdAve/E37th"},
      {"8thAve/W35th", "FashionAve/W35th", "6thAve/W35th", "5thAve/E35th", "MadisonAve/E35th", "ParkAve/E35th", "LexingtonAve/E35th", "3rdAve/E35th"},
       {"8thAve/W34th", "FashionAve/W34th", "6thAve/W34th", "5thAve/E34th", "MadisonAve/E34th", "ParkAve/E34th", "LexingtonAve/E34th", "3rdAve/E34th"},
        {"8thAve/W33rd", "FashionAve/W33rd", "6thAve/W33rd", "5thAve/E33rd", "MadisonAve/E33rd", "ParkAve/E33rd", "LexingtonAve/E33rd", "3rdAve/E33rd"}};
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 8; j++){
      cout << streets[i][j];
      if(j!=7 && i != 9){
        cout << "-->";
      }
      if(j == 9){
        cout << endl;
      }
    }
    cout << endl;
    if(i != 8){
      for(int i = 0; i < 8; i++){
        cout << " |               ";
        if(i == 7){
          cout << endl;
        }
      }
      for(int i = 0; i < 8; i++){
        cout << " V               ";
        if(i == 7){
          cout << endl;
        }
      }
    }
  }
  cout << endl;
  cout << endl;
}

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
  NewYork h; //SHOULD IT BE HEADER* ??
//create graph
  h.loadVertex();
  h.loadEdges();
  //h.displayEdges(); used for testing no longer needed
//vertex of the street that the words that will be added to the LL to be passed into insertStore
  vertex* vertexOfInt;


//declare string what you're reading in from file
  string line;
  string store;
  string street;

  ifstream fin;
  fin.open("ShopInfo.csv"); //open the file
  //read in from file
  if(fin.is_open())
  {
    while(getline(fin, line))//read in line by line
    {
      //initialize a counter to keep track of what you're reading in from file
      int counter = 0;
      stringstream ss(line); //use string stream to separate words in that line
      getline(ss, street, ','); //at each line the first word is the intersection
      counter++;//note that the first word is added
      //search the graph for "intersection"
      //to find the vertex in which the linked list will be attached
      vertexOfInt = h.searchGraph(street);

      intersection* previous = NULL;
      //after the first word then add the words to the linked list until the word is NULL
      while(getline(ss, store, ',') && counter > 0 && store != "NULL")
      {
        if(store == "NULL"){
          break;
        }
        previous = h.insertStore(previous, store);
        //h.updatePrev(previous, store);
        //vertex struct in graph: name of intersection + LL
      }
    }
  }
  fin.close();

  cout << "Welcome to Map-A-Small-Section-of-Manhattan. This only works if you are in and would like to go to anywhere between 34rd-8th Avenue and 42nd-33rd Street " << endl;
  cout << endl;
  cout << endl;
  printStreetNames();
  while(response == "Y" || response == "y")
  {

    // cout << "Enter the street you are on that runs North to South. Use the form 'StreetNameAve' e.i. '8thAve' or 'FashionAve'." << endl;
    // cin >> NSStCurr;
    // cout << "Enter the street you are on that runs East to West. Use the form 'FIRST_LETTER_OF_CARINAL_DIRECTIONSTREET_NUMBER_superscript' e.i. 'W45th' or 'E31st'." << endl;
    // cin >> EWStCurr;
    //
    //
    // //use the two inputs to locate the exact vetex (startV)
    // startV = NSStCurr + "/" + EWStCurr;
    //
    // cout << "Enter the street you want to go to that runs North to South. Use the form 'StreetNameAve' e.i. '8thAve' or 'FashionAve'." << endl;
    // cin >> NSSt;
    // cout << "Enter the street you want to go to that runs East to West. Use the form 'FIRST_LETTER_OF_CARINAL_DIRECTIONSTREET_NUMBER_superscript' e.i. 'W45th' or 'E31st'." << endl;
    // cin >> EWSt;
    cout << "Enter your current street intersection (Ex 8thAve/W34th)" << endl;
    cin >> startV;
    cout << endl;
    cout << "Enter your desired location (Ex. MadisonAve/E40th)" << endl;
    cin >> endV;
    cout << endl;
    //use the two inputs to locate the exact vetex (endV)
    //endV = NSSt + "/" + EWSt;

    cout << "Directions to " << endV << ": " << endl;
    //find shortest path
    //inside printDirections, DijkstraAlgorithm will be run to find the shortest path possible
    cout << endl;
    h.printDirections(startV, endV); //prints the directions to get to the final location
    cout << endl;
    cout << "Nearby shops, restaurants, entertainment, and parks: " << endl;
    //display what is in the LL from that node
    cout << endl;
    //h.printStores(); //DOES THIS PRINT JUST FROM THE FINAL DESTINATION???
    cout << endl;
    cout << "Would you like to map to a different intersection? Type Y or N" << endl;
    cin >> response;
    if(response != "Y" || response != "y" ||response != "N" || response != "n")
    {
      if(response == "N" || response == "n")
      {
        cout << "Have a safe trip to the intersection of " << NSSt << " and " << EWSt << "." << endl;
        break;
      }
      cout << "Error: not a valid response. Please enter Y or N" << endl;
      cin >> response;
    }

  }
  return 0;
}

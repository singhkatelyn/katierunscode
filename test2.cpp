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
  string streets[10][8] = {{"8thAve/W42nd", "FashionAve/W42nd", "6thAve/W42nd", "5thAve/E42nd", "MadisonAve/E42nd", "ParkAve/E42nd", "LexingtonAve/E42nd", "3rdAve/E42nd"},
   {"8thAve/W41st", "FashionAve/W41st", "6thAve/W41st", "5thAve/E41st", "MadisonAve/E41st", "ParkAve/E41st", "LexingtonAve/E41st", "3rdAve/E41st"},
   {"8thAve/W40th", "FashionAve/W40th", "6thAve/W40th", "5thAve/E40th", "MadisonAve/E40th", "ParkAve/E40th", "LexingtonAve/E40th", "3rdAve/E40th"},
   {"8thAve/W39th", "FashionAve/W39th", "6thAve/W39th", "5thAve/E39th", "MadisonAve/E39th", "ParkAve/E39th", "LexingtonAve/E39th", "3rdAve/E39th"},
    {"8thAve/W38th", "FashionAve/W38th", "6thAve/W38th", "5thAve/E38th", "MadisonAve/E38th", "ParkAve/E38th", "LexingtonAve/E38th", "3rdAve/E38th"},
     {"8thAve/W37th", "FashionAve/W37th", "6thAve/W37th", "5thAve/E37th", "MadisonAve/E37th", "ParkAve/E37th", "LexingtonAve/E37th", "3rdAve/E37th"},
     {"8thAve/W36th", "FashionAve/W36th", "6thAve/W36th", "5thAve/E36th", "MadisonAve/E36th", "ParkAve/E36th", "LexingtonAve/E36th", "3rdAve/E36th"},
      {"8thAve/W35th", "FashionAve/W35th", "6thAve/W35th", "5thAve/E35th", "MadisonAve/E35th", "ParkAve/E35th", "LexingtonAve/E35th", "3rdAve/E35th"},
       {"8thAve/W34th", "FashionAve/W34th", "6thAve/W34th", "5thAve/E34th", "MadisonAve/E34th", "ParkAve/E34th", "LexingtonAve/E34th", "3rdAve/E34th"},
        {"8thAve/W33rd", "FashionAve/W33rd", "6thAve/W33rd", "5thAve/E33rd", "MadisonAve/E33rd", "ParkAve/E33rd", "LexingtonAve/E33rd", "3rdAve/E33rd"}};
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 8; j++){
      cout << streets[i][j];
      if(j!=7 && i != 10){
        cout << "<->";
      }
      if(j == 9){
        cout << endl;
      }
    }
    cout << endl;
    if(i != 9){
      for(int i = 0; i < 8; i++){
        cout << "  |               ";
        if(i == 7){
          cout << endl;
        }
      }
      for(int i = 0; i < 8; i++){
        cout << "  |               ";
        if(i == 7){
          cout << endl;
        }
      }
      //for(int i = 0; i < 8; i++){
      //   cout << " V               ";
      //   if(i == 7){
      //     cout << endl;
      //   }
      // }
    }
  }
  cout << endl;
  cout << endl;
}


int main(){
  NewYork n;
  string stores[95][20];
  ifstream inFile;
  string line;
  string startV; //combine the words
  string endV; //combine the words
  string response = "Y";
  int d1 = 0;
  int d2 = 1;
  inFile.open("ShopInfo.csv");
  if(inFile){
    while(getline(inFile, line)){
      d2 = 1;
      string previous = "";
      string store = "";
      string streetName = "";
      stringstream ss(line);
      getline(ss, streetName, ',');
      n.addVertex(streetName);
      intersection* prev = NULL;
      n.insertStore(prev, streetName);
      previous = streetName;
      prev = n.searchStore(previous);
      while(getline(ss, store, ',')){
        if(d2 != 20){
          stores[d1][d2] = store;
          d2++;
        }
        n.insertStore(prev, store);
        prev = n.searchStore(store);
      }
      stores[d1][0] = streetName;
      d1++;
    }
    n.loadEdges();
    inFile.close();
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
      vector<string> solved = n.printDirections(startV, endV); //prints the directions to get to the final location
      n.printDirectionsOnly(solved);
      cout << endl;
      cout << "Nearby shops, restaurants, entertainment, and parks: " << endl;
      //display what is in the LL from that node

      int counter = 0;
      for(int i = 0; i < d1; i++){
        for(int j = 0; j < 20; j++){
          if(stores[i][0] == endV){
            if(counter != 0){
              cout << stores[i][j];
              if(stores[i][j] != "NULL" || stores[i][j] != ""){
                cout << " -->";
              }
              if(stores[i][j] != "NULL"){
                cout << "NULL" << endl;
                break;
              }

            }
            counter++;
          }
        }
      }//DOES THIS PRINT JUST FROM THE FINAL DESTINATION???
      cout << endl;
      cout << endl;
      cout << "Would you like to map to a different intersection? Type Y or N" << endl;
      cin >> response;
      while(response != "Y" || response != "y" ||response != "N" || response != "n"){
        if(response == "Y" || response == "y" ||response == "N" || response == "n")
        {
          if(response == "Y" || response == "y")
          {
            main();
          }
          if(response == "N" || response == "n")
          {
            cout << "Have a safe trip."<< endl;
            break;
          }
        }
        else{
          cout << "Error: not a valid response. Please enter Y or N" << endl;
          cin >> response;
        }
      }
    }
    return 0;
  }
  else{
    cout << "File failed to open" << endl;
  }
}

#include "Header.hpp"
using namespace std;


NewYork :: intersection(){
  head = NULL;
}

bool NewYork ::isEmpty(){
  if(head == NULL){
    return true;
  }
  return false;
}

void NewYork::insertStore(store* previous, string storeName){
  store* temp;
  if (previous == NULL){
    cout << "adding: " << storeName << " (HEAD)" << endl; //comment out after testing is done
    temp = head;
    head = new store;
    head -> name = storeName;
    head -> next = temp;
  }
  else if (head == NULL){
    cout << "adding: " << storeName << " (HEAD)" << endl; //comment out after testing is done
    head = new store;
    head -> name = storeName;
    head -> next = NULL;
  }
  else{
    cout << "adding: " << storeName << " (prev: " << previous -> name << ")" << endl; //comment out after testing is done
    temp = new store;
    temp -> next = previous -> next; //a to c now b to c
    previous -> next = temp; //a to b
    temp -> name = storeName; //fill
  }
}

Store* NewYork::searchStore(string storeName){
  Country *craweler = head;
	while(craweler != NULL){
    if(craweler -> name == storeName){
      return craweler;
    }
		craweler = craweler -> next;
	}
  return NULL;
}

void NewYork::printStores() {
  store*temp = head;
  int counter = 0;
  if(temp == NULL){
    cout << "nothing in path" << endl;
  }
	while(temp != NULL){
		cout << counter << ". " << temp -> name << endl;
    counter++;
  cout << "===" << endl;
}

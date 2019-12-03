#pragma once
#include <iostream>
using namespace std;

struct store{
  string storeName;
  string storeType;
  store *next;
};

class intersection{
    private:
      store* head;
    public:
      intersection();
      bool isEmpty();
      void insertStore(store* previous, string storeName);
      store* searchStore(string storeName);
      void printStores();
};

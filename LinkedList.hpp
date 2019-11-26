#pragma once
#include <iostream>
using namespace std;

struct store{
  string storeName;
  store *next;
};

class intersection{
    private:
      store* head;
    public:
      intersection();
      void insertStore(store* previous, string storeName);
      void loadMap();
      store* searchNetwork(string storeName);
      void printStores;
};

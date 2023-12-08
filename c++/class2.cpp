/* Classes and objects */

#include <iostream>

using namespace std;

class Parent{
  int a = 10;

public:
  void dispParent(){
    cout << "From class Parent: "<<a<<endl;
  }
};

class Child {
  int b = 20;

public:
  void dispChild(){
    cout << "From Child: "<<b<<endl;
  }
};

void main(){
  Parent  a1;
  a1.dispParent();
  a1.dispChild();
  Child b1;
  Child b1.dispChild();

  // return 0;
}

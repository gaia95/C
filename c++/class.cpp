/* Animal class and objects.
- Create an animal class as a base for other animals.        
- With only one function member smell() and display "I smell like \ an animal"                                                          
- Create sub classes                               
- Each class has function member smell() that display "I smell lik\ e..".
*/

#include <iostream>
using namespace std;

class Animal {
public: 
  void Smell(){
    cout<< "I smell like an animal" <<endl;
  }
};

// public Animal to inherit everything from  Parent class                

class Dog: public Animal {

// public för att göra dessa metoder globala                       
public:
  void Smell(){
    cout<< "I smell like a dog" <<endl;
  }
};

class Cat: public Animal {
public:
  void Smell(){
    cout<< "I smell like a cat" <<endl;
  }
};

int main (){
  // Instances for every child class                                
  Dog d1,d2;
  Cat c1, c2;

  // assigning method to instances 
  d1.Smell();
  c1.Smell();

  return 0;

}



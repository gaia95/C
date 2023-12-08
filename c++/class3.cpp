/* Classes and objects */

#include <iostream>
#include <cstring>

using namespace std;

class Student {

private:
  int secret = 12345; // private variable, only exist locally
  void display_secret (){
     cout << secret << endl;

  };


public:
  char name[20];
  int age;

  void display (){

    cout << name << " is " << age << " years old. "<< endl;

  };

};

int main(){

  // Instance objects                                                         
  Student s1,s2;

  strcpy(s1.name,"Meriem");
  strcpy(s2.name,"Mohammed");
  s1.age = 25;
  s2.age = 30;

  s1.display();
  s2.display();

  //s2.secret = 345                                                           
  // s1.display_secret();                                                     
  return 0;
}
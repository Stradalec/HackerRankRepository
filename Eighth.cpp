#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//End of first fixed code

class Person {
  string name;
  int age;
  
  public:
  
  virtual void getdata(){
    cin >> name;
    cin >> age;
  }
  virtual void putdata(){
    cout << name << " " << age << " ";  
  }
};

class Professor: public Person {
  int publications;
  int currentID;
  static int ID;

  public:
  
  Professor()
    {
     currentID = ++ID;
    }
  
  
  virtual void getdata(){
    Person::getdata();
    cin >> publications;
  }
  virtual void putdata(){
    Person::putdata();
    cout << publications << " " << currentID << endl;  
  }
};

class Student: public Person {
  public:
  
  int marks[6];
  int currentID;
  int summ = 0;
  static int ID;
  
  Student()
    {
     currentID = ++ID;
    }
  
  
  virtual void getdata(){
    Person::getdata();
    for(int index = 0; index < 6; ++index){
      cin >> marks[index];
      summ += marks[index];
    }
  }
  virtual void putdata(){
    Person::putdata();
    cout << summ << " " << currentID << endl;  
  }
};
int Professor::ID = 0;
int Student::ID = 0;

//Begin of second fixed code.

int main(){

    int firstNumber;
    int value;
    
    cin>>firstNumber; //The number of objects that is going to be created.
    Person *per[firstNumber];

    for(int index = 0; index < firstNumber; ++index){

        cin>>value;
        if(value == 1){
            // If val is 1 current object is of type Professor
            per[index] = new Professor;

        }
        else per[index] = new Student; // Else the current object is of type Student

        per[index]->getdata(); // Get the data from the user.

    }

    for(int index = 0; index < firstNumber; ++index)
        per[index]->putdata(); // Print the required output for each object.

    return 0;

}
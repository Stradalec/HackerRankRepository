#include <iostream>

using namespace std;

int main() {
  int firstNumber;
  int secondNumber;
  
  cin >> firstNumber;
  cin >> secondNumber;
  
  for (int thirdNumber=firstNumber; thirdNumber <= secondNumber; thirdNumber++){
    if (thirdNumber==1){
      cout << "one" << endl;
    } else if (thirdNumber==2) {
      cout << "two" << endl;
    } else if (thirdNumber==3) {
      cout << "three" << endl;
    } else if (thirdNumber==4) {
      cout << "four" << endl;
    } else if (thirdNumber==5) {
      cout << "five" << endl;;
    } else if (thirdNumber==6) {
      cout << "six" << endl;
    } else if (thirdNumber==7) {
      cout << "seven" << endl;
    } else if (thirdNumber==8) {
      cout << "eight" << endl;
    } else if (thirdNumber==9) {
      cout << "nine" << endl;
    } else if (thirdNumber%2==0) {
      cout << "even" << endl;
    } else {
      cout << "odd" << endl;
    }
     
  }
    
  return 0;
}
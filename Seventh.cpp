#include <iostream>

using namespace std;

int maximum (int firstNumber, int secondNumber,
int thirdNumber, int fourthNumber) {
  int maximum = -1001;
  if (firstNumber > maximum) {
    maximum = firstNumber;
  }
  
  if (secondNumber > maximum) {
    maximum = secondNumber;
  }
  
  if (thirdNumber > maximum) {
    maximum =thirdNumber;
  }
  
  if (fourthNumber > maximum) {
    maximum = fourthNumber;
  }
  
  return maximum;
}

int main() {
  int firstNumber;
  int secondNumber;
  int thirdNumber;
  int fourthNumber;
  int maxNumber;
  
  cin >> firstNumber;
  cin >> secondNumber;
  cin >> thirdNumber;
  cin >> fourthNumber;

  maxNumber = maximum(firstNumber, secondNumber,
    thirdNumber, fourthNumber);
  
  cout << maxNumber;
    
  return 0;
}

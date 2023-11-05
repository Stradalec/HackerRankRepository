#include <stdio.h>
#include <math.h>

void update(int *pointFirstNumber,int *pointSecondNumber) {
  *pointFirstNumber = *pointFirstNumber + *pointSecondNumber;
  *pointSecondNumber = abs(*pointFirstNumber - (2 * *pointSecondNumber) );       
}

int main() {
  int firstNumber;
  int secondNumber;
  int *pointFirstNumber = &firstNumber;
  int *pointSecondNumber = &secondNumber;
    
  scanf("%d %d", &firstNumber, &secondNumber);
  update(pointFirstNumber, pointSecondNumber);
  printf("%d\n%d", firstNumber, secondNumber);

  return 0;
}
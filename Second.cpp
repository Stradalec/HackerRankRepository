#include <cstdio>
#include <iostream>

using namespace std;


int main() {
  int shortInt;
  long longInt;
  char symbol;
  float numberFloat;
  double numberDouble;
    
  scanf("%d  %ld  %c  %f  %lf", &shortInt, &longInt,
  &symbol, &numberFloat, &numberDouble);
    
  printf("%d  \n",  shortInt);
  printf("%ld \n", longInt);
  printf("%c  \n",  symbol);
  printf("%f  \n",  numberFloat);
  printf("%lf \n", numberDouble);
    
  return 0;
}
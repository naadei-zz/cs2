#include <iostream>

using namespace std;

bool numberCheck(int array[], int arraySize, int number) {
  int itterator = 0;
  while (itterator != arraySize){
    if (array[itterator] == number) {
      return 1;
    }
    itterator++;
  }
  
  return 0;
};

int main(){

  const int arraySize = 20;
  int findNumber = 22;

  int randomNumbers[arraySize] = {43,28,99,95,68,3,69,12,7,96,28,1,44,30,18,71,16,22,35,91};


  cout << "Does the array contain the number " << findNumber << "? " << numberCheck(randomNumbers, arraySize, findNumber);

  return 0;
} 
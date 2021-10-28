#include <iostream>

using namespace std;

bool numberOrderCheck(int array[], int arraySize) {
  
  for (int i = 0; i < arraySize; i++){
    int nextIndex= i--;
    int previousIndex = i++;

    if(array[i] < array[previousIndex]) {
      return 0;
    }
  }
  return 1;
};

int main(){

  const int arraySize = 20;
  int randomNumbers[arraySize] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; // In ordr
  //int randomNumbers[arraySize] = {1,2,3,4,5,6,7,8,9,10,13,12,13,14,15,16,17,18,19,20};  // Out of order

  cout  << "\n\n-----------------------------------------------------------------------\n\n"
        << "Is the array of numbers in order? " << numberOrderCheck(randomNumbers, arraySize)
        << "\n\n-----------------------------------------------------------------------\n\n";
        
  return 0;
} 
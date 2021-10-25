#include <iostream>

using namespace std;

// This is the blackbox function that takes in the number of chickens and outputs the number of eggs (chickents muliplied by 3)
int numberOfEggs(int number){
  return number*3;
}

int main(){
  int chickens = 10;

  cout << "The chickens laid this many eggs: " << numberOfEggs(chickens);
  return 0;
}

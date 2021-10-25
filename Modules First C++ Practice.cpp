#include <iostream>

using namespace std;

int numberOfEggs(int number){
  return number*3;
}

int main(){
  int chickens = 10;

  cout << "The chickens laid this many eggs: " << numberOfEggs(chickens);
  return 0;
}

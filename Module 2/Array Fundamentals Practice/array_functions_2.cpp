#include <iostream>

using namespace std;

int uppercaseCount(char message[]) {

  int uppercaseSum = 0;

  // Itterate over char and break at end
  for(int i = 0; message[i] != '\0'; i++){
    int character = message[i]; // Get ACII code

    if ((character >= 65) && (character <= 90)) {
      uppercaseSum ++; // Add to sum
    }
  }
  
  return uppercaseSum; // Return sum of all uppercase letters
};

int main(){

  int maxLength = 256; 
  char userMessage[maxLength];

  cout  << "\n\n-----------------------------------------------------------------------\n\n"
        << "\033[1;35mPlease type something then press [ENTER]:\n\n\033[0m";

  cin.get(userMessage, maxLength);

  cout  << "\n\n-----------------------------------------------------------------------\n\n"
        << "> There are \033[1;35m" << uppercaseCount(userMessage) << "\033[0m uppercase letters in the message!"
        << "\n\n-----------------------------------------------------------------------\n\n";

  return 0;
} 
#include <iostream>

using namespace std;

int main(){

  // Initialize variables
  int maxLength = 256;
  char userInput[maxLength];

  int totalCharacters = 0;
  int totalWords = 0;
  int wordCharacterCount = 0;
  int mostVowels = 0;
  int vowels[20] = {65,69,73,79,85,97,101,105,111,117};
  string word;
  string longestWord;
  string wordWithMostVowels;

  cout << "\n\n-----------------------------------------------------------------------\n\n";
  cout << "\033[1;35mPlease type something then press [ENTER]:\n\n\033[0m";
  cin.get(userInput, maxLength);

  // Case for nil or short input

  if (strlen(userInput) < 5) {
    cout << "Please enter something longer! :(";
    cout << "\n\n-----------------------------------------------------------------------\n\n";
    
  } else {

    // Start char Loop
    // Counters
    int wordVowelCount;

    for (int i = 0; userInput[i] != '\0'; i++) {

      // Covert character into ACII number
      int character = userInput[i];

      // Non space or period characters
      if((character != 32) && (character != 46)) {
        // Total Character tally
        totalCharacters += 1;

        // Word tally
        wordCharacterCount += 1;

        // Word constructor
        word += userInput[i];

        // Vowel tally
        if (find(begin(vowels), end(vowels), character) != end(vowels)) {
          wordVowelCount += 1;
        }
      };


      // End of word, determined by Space (32). Also ignores multiple spaces

      int nextIndex = i + 1; // Determine if the next loop is the final itteration

      if ((character == 32) || (userInput[nextIndex] == '\0')) {

        // Longest Word check
        if (wordCharacterCount > longestWord.length()) {
          longestWord = word; // Assign new longest word
        }

        // Word with most vowels check
        if ((wordVowelCount >= mostVowels) && (wordVowelCount != 0)) {
          wordWithMostVowels = word;
          mostVowels = wordVowelCount;
        }
        
        totalWords += 1; // Add word count
        word.clear(); // reset current word
        wordVowelCount = 0; // reset vowel tally
        wordCharacterCount = 0; // reset character tally
      }

    };




    cout << "\n\n-----------------------------------------------------------------------\n\n";
    cout << "                           [ R E S U L T S ]                           \n\n";

    cout << "\033[1;35m  - Total Characters: \033[0m";
    cout << totalCharacters;
    cout << " (does not include spaces)\n";

    if (totalWords > 1) {
      cout << "\033[1;35m  - Total Words: \033[0m";
      cout << totalWords;
      cout << "\n";

      cout << "\033[1;35m  - Longest word: \033[0m";
      cout << longestWord;
      cout << ", it contains ";
      cout << longestWord.length();
      cout << " characters!";
      cout << "\n";
    }

    if (mostVowels > 0) {
      cout << "\033[1;35m  - Word with the most vowels: \033[0m";
      cout << wordWithMostVowels;
      cout << ", it contains ";
      cout << mostVowels;
      cout << " vowels! WOW!";
    }
    cout << "\n\n-----------------------------------------------------------------------\n\n";
  
  }

  return 0;
}

#include <iostream>

using namespace std;

int renderColumns(int maxColumns, int currentRow, int maxRows){

  // Initialize controller
  int controller = 1;

  for (int column = 1; column > 0; column += controller) {

    // Switch direction of loop half way using controller
    if (column > maxColumns/2) {
      controller = -1;
    }
    
    // Logic to determin if Symbol should render
    bool renderSymbol = false;

    if (((column >= currentRow) && (column < (currentRow*2))) || ((currentRow == maxRows/2) && (column > maxColumns/2))) {
      renderSymbol = true;    
    }

    // render symbol based on boolean
    if (renderSymbol) {
      cout << '#';
    } else {
      cout << ' ';
    }
  }

  // I had an idea to return it here as a string, but the contraint said no string manipulation
  return 0;
}

int main(){

  // Declare values
  int maxRows = 10;
  int maxColumns = 19;

  // Initialize controller
  int controller = 1;
  
  for (int row = 1; row > 0; row += controller) {
    
    // Switch direction of loop half way using controller
    if (row > maxRows/2) {
      controller = -1;
    }

    // Render columns
    if (row <= maxRows/2) {
      renderColumns(maxColumns, row, maxRows);
      cout << '\n';
    }
    
  }
  return 0;
}

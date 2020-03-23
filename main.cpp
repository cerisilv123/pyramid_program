#include <iostream>
#include <string>

using namespace std;

int main () {
    
    cout << "Please enter a sequence of letters: "; 
    string letters_input_list{};
    cin >> letters_input_list; 
    
    size_t rows {};
    rows = letters_input_list.length(); // Calculating rows
    
    char selection {}; // Menu selection
            
    size_t r {}; // Loop through rows
    size_t c {}; // Print out letters before descending
    size_t sp {}; // White space
    
    do {
        
      cout << "\n======== Menu ========" << endl; 
      cout << "\nA - Ascending Pyramid" << endl; 
      cout << "D - Descending Pyramid" << endl; 
      cout << "Q - Quit Program" << endl; 
      cin >> selection;
    
     if (selection == 'A' || selection == 'a') {
      for (r = 1; r <= rows; r++) { // Ascending Pyramid - Outer loop - Loop through number of rows 
          for (sp = 1; sp <= rows-r; sp++) { // Inner loop 1 - white space before 
            cout << " ";
          }
          for (c = 1; c <= r; c++) { // Inner loop 2 - print out letters to pyramid
            cout << letters_input_list.at(c-1); 
          }
          for (size_t k = c-2; k >= 1; k--) { // Inner loop 3 - Print out descending letters
            cout << letters_input_list.at(k-1);
          }
          cout << "\n"; // At end of inner loops it will print a new line
      }
     }
     else if (selection == 'D' || selection == 'd') {
      for (r = rows; r > 0; r--) { // Descending Pyramid - Outer loop - Loop through number of rows 
          for (sp = 0; sp<rows-r ;sp++) { // Inner loop 1 - white space before 
             cout << " "; 
          }
          for (c = 1; c <= r; c++) { // Inner loop 2 - print out letters to pyramid
             cout << letters_input_list.at(c-1);    
          } 
          for (size_t k = c-2; k >= 1; k--) { // Inner loop 3 - Print out descending letters
             cout << letters_input_list.at(k-1);
          }
          cout << "\n"; // At end of inner loops it will print a new line
      } 
     }
     else if (selection == 'q' || selection == 'Q') {
        cout << "\nProgram Quit" << endl;
     }
     else {
        cout << "\nUser input error, please try again" << endl; 
     }
    } while (selection != 'q' && selection != 'Q');
      
  cout << endl; 
  return 0;   
} 

#include <iostream>
#include <string>

using namespace std;

int main () {
    
    cout << "Please enter a sequence of letters: "; 
    string letters_input_list{};
    cin >> letters_input_list; 
    
    size_t rows {};
    rows = letters_input_list.length(); // Calculating rows
            
    size_t r {};
    size_t c {};
    size_t sp {};

    for (r = 1; r <= rows; r++) { // Outer loop - Loop through number of rows - ABC = 3 Rows
        for (sp = 1; sp <= rows-r; sp++) { // Inner loop 1 - white space before - Loop 1: (3-1) = 2
            cout << " ";
        }
        for (c = 1; c <= r; c++) { // Inner loop 2 - print out letters to pyramid
            cout << letters_input_list.at(c-1); // will print element at index (1-1).. (1-1) + (2-1).. (1-1) + (2-1) + (3-1)
        }
        for (size_t k = c-2; k >= 1; k--) { // Inner loop 3 - Print out descending letters
            cout << letters_input_list.at(k-1);
        }
        cout << "\n"; // At end of inner loops it will print a new line
    }
    
  cout << endl; 
  return 0;   
} 

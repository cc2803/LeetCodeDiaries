/*
Problem statement:
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

You must print a matrix corresponding to the given Reverse Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A B C
A B
A

*/

void nLetterTriangle(int n) {
    for (int i = n; i >= 1; i--) {
      for (int j = 0; j < i; j++) {
        cout << char('A' + j) << " ";
      }
        cout << endl; 
    }
}
/*
Problem statement:
Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
*

*/

void seeding(int n) {

	for(int j=1;j<=n;j++){
          for (int i = n-j+1; i > 0; i--) {
            cout << "* ";
          }
          cout << endl;
        }
}
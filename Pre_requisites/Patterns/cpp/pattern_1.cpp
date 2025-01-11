/*
Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

Example:
Input: ‘N’ = 3

Output: 
* * *
* * *
* * *

*/

void nForest(int n) {
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

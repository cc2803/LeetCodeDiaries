/*
Problem statement:
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.

Example:
Input:  ‘N’ = 3

Output: 
* 
* *
* * *

*/

void nForest(int n) {
	int i=0,j=0;

	for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
			cout<<"* ";
            }
		
		for(j=1;j<=n-1-i;j++){
			cout<<" ";
            }
		cout<<endl;
		
        }
}
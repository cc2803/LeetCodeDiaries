/*
Problem statement:
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.

Example:
Input: ‘N’ = 3

Output: 

*
**
***
**
*

*/

void nStarTriangle(int n) {
    
    int i,j,stars;

    for(i=1;i<2*n;i++){
      if (i <= n) stars=i;
      else stars=2*n-i;

    for(j=1;j<=stars;j++){
        cout<<"*";
    }
    cout<<endl;

    }
}
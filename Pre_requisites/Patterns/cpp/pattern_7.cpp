/*
Problem statement:
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****

*/

void nStarTriangle(int n) {
    
    int i,j,k,n_spaces,n_stars;

    for(i=1;i<n+1;i++){

        n_stars = 2*i-1;
        n_spaces = n-i;

        for(j=1;j<=n_spaces;j++){
            cout<<" ";
        }

        for(k=1;k<=n_stars;k++){
            cout<<"*";
        }
        cout<<endl;
    
    }
}
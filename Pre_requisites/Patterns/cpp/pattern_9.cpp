/*

Print a diamond for given N as shown:

N = 3

Output:

  *
 ***
*****
*****
 ***
  *
  
*/

void nStarDiamond(int n) {
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

        for(i=n;i>0;i--){

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

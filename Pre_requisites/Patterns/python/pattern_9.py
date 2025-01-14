'''
Problem statement:
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *

'''

def nStarDiamond(n: int) -> None:

    for i in range(1,n+1):

        n_stars=2*i-1
        n_spaces=n-i

        print(" "*n_spaces+"*"*n_stars)
    
    for i in range(n,0,-1):

        n_stars=2*i-1
        n_spaces=n-i

        print(" "*n_spaces+"*"*n_stars)


#Single loop approach:

def nStarDiamond(n: int) -> None:

    for i in range(1,2*n+1):

        if i<n:
            n_stars=2*i-1
            n_spaces=n-i

        elif i==n:
            n_stars=2*i-1
            n_spaces=n-i
            print(" "*n_spaces+"*"*n_stars)

        else:
            n_stars=2*(2*n-i)-1
            n_spaces=i-n

        print(" "*n_spaces+"*"*n_stars)
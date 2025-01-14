'''
Problem statement:
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *

'''

def nStarTriangle(n: int) -> None:

    for i in range(n,0,-1):

        n_stars=2*i-1
        n_spaces=n-i

        print(" "*n_spaces+"*"*n_stars)
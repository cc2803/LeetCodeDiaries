'''
Problem statement:
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****

'''

def nStarTriangle(n: int) -> None:
    
    for i in range(1,n+1):

        n_stars=2*i-1
        n_spaces=n-i

        print(" "*n_spaces+"*"*n_stars)
'''
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

'''

def nStarTriangle(n: int) -> None:
    for i in range(1, 2*n):
        stars = i if i <= n else 2*n - i
        print("*" * stars)
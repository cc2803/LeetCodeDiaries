'''
Problem statement:
Sam is curious about Alpha-Ramp, so he decided to create Alpha-Ramp of different sizes.

An Alpha-Ramp is represented by a triangle, where alphabets are filled from the top in order.

For every value of ‘N’, help sam to return the corresponding Alpha-Ramp.

Example:
Input: ‘N’ = 3

Output: 
A
B B
C C C

'''

def alphaRamp(n: int) -> None:
    alphabets=[ i for i in "abcdefghijklmnopqrstuvwxyz"]
    for i in range(n):
        for j in range(i+1):
            print(alphabets[i].upper(),end=" ")
        print()
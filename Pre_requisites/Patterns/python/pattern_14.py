'''
Problem statement:
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

You must print a matrix corresponding to the given Reverse Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A B C
A B
A

'''

def nLetterTriangle(n: int) -> None:
    alphabets=[ i for i in "abcdefghijklmnopqrstuvwxyz"]
    for i in range(n,0,-1):
        for j in range(i):
            print(alphabets[j].upper(),end=" ")
        print()
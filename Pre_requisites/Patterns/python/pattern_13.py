'''
Problem statement:
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C

'''

def nLetterTriangle(n: int) -> None:
    alphabets=[ i for i in "abcdefghijklmnopqrstuvwxyz"]
    for i in range(n):
        for j in range(i+1):
            print(alphabets[j].upper(),end=" ")
        print()
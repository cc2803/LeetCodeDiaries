class Solution:
    def isPalindrome(self, x: int) -> bool:
        number = x
        reversed_number = 0
        while number > 0:
            digit = number % 10
            reversed_number = reversed_number * 10 + digit
            number = number // 10

        if reversed_number == x:
            return True
        else:
            return False
## it might look same but the only thing that it didn't consider the special one like divisible 10 which will be obviously not pallindrome but yeah 0 is an exception

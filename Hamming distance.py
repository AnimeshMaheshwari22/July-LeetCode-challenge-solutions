'''
As the description suggests, Hamming distance is the total number of places where the bits are different in the numbers. Now, we know that xor of 2 bits is 1 if they are not the same. Binary of any number with bin(number) gives a string. We xor both the numbers, get the binary representation and count the number of '1's in the resultant string and return that count.   
'''
class Solution:
    def hammingDistance(self, x: int, y: int) -> int:

        z=x^y
        n=bin(z)
        n=n.replace('0b','')
        return n.count('1')

        
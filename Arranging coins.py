class Solution:
    def arrangeCoins(self, n: int) -> int:
        # This basically comes down to coins in the array being the index+1 amount. We have to continue until the         # collected coins until now are less than or equal to n 
        s=0 # variable to store the count
        k=0 # keep the count of coins collected until the current step
        for i in range(0,n):
            k+=i+1
            if k<=n:
                s+=1
            else:
                break
        return s
        
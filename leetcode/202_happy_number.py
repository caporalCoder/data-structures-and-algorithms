
def isHappy(n):
    
    d = dic()

    d[n] = True

    while True:
        sum  = 0
        for c in str(n):
            sum += int(c)**2
        if sum == 1:
            return True

        if sum in d:
            return False
        
        d[sum] = True

        n = str(num)
        


        
        

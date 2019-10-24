def fibonacci(n): 
    a = 0
    b = 1
    if n == 0:
        return a 
    elif n == 1:
        return b 
    else:
        if n in fib_val:
            return fib_val[n]
        imx = 1
        for k in fib_val.keys():
            if k>imx and k<n:
                imx = k
        if imx<n:
            a = fib_val[imx-1]
            b = fib_val[imx]
            for i in range(imx+1,n+1):
                c = (a + b)%10
                a = b%10
                b = c
            fib_val[n] = b
            fib_val[n-1] = a
        else:
            for i in range(2,n+1):
                c = (a + b)%10
                a = b%10
                b = c
            fib_val[n] = b
            fib_val[n-1] = a
        return b%10
        
        

import math
testcase = int(input())
fib_val = {0:0,1:1,2:1,3:2,4:3,5:5}
i = 100
while i <=pow(10,18):
    fib_val[i] = 5
    fib_val[i-1] = 6
    i = i*100
for _ in range(testcase):
    n = int(input())
    ind = int(math.pow(2, math.floor(math.log2(n)))-1)
    print(fibonacci(ind))
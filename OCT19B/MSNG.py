def val(c): 
    if c >= '0' and c <= '9': 
        return ord(c) - ord('0') 
    else: 
        return ord(c) - ord('A') + 10; 

def numValue(n,b):
    sn = str(n)
    l = len(sn)
    num = 0
    for i in range(l):
        c = sn[l-1-i]
        c = val(c)
        num += (pow(b,i)*c)
    return num

testcase = int(input())
while testcase:
    n = int(input())
    num = -1
    q = []
    for i in range(n):
        b,x = map(str,input().split(' '))
        b = int(b)
        q.append((b,x))
        if b!=-1:
            num = numValue(x,b)
    if num!=-1:
        found = 0
        for b,x in q:
            if b==-1:
                for i in range(2,37):
                    value = numValue(x,i)
#                     print(value)
                    if value==num:
                        found+=1
                        break
            else:
                value = numValue(x,b)
                if value==num:
                    found+=1
        if found==n:
            print(num)
        else:
            print(-1)
        
    testcase-=1
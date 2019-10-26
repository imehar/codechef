testcase = int(input())
while testcase>0:
    n,k = map(int,input().split(' '))
    a = list(map(int,input().split(' ')))
    an = [0]*n
    a2n = [0]*n
    temp = [0]*n
    stage = a
    if k<=n:
        for i in range(k):
            one = a[i%n]
            two = a[n-(i%n)-1]
            a[i%n] = one^two
        print(*a,sep=' ')
        testcase-=1
        continue
    temp = a.copy()
    for i in range(n):
        one = temp[i%n]
        two = temp[n-(i%n)-1]
        temp[i%n] = one^two
        an[i%n] = temp[i%n]
    case = (k//n)%3
    if case ==0:
        if n%2!=0:
            a[n//2] = 0
        stage = a
#         print(*a,sep=' ')
    elif case ==1:
        stage = an
#         print(*an,sep=' ')
    elif case==2:
        temp = an.copy()
        for i in range(n):
            one = temp[i%n]
            two = temp[n-(i%n)-1]
            temp[i%n] = one^two
            a2n[i%n] = temp[i%n]
        stage = a2n
#         print(*a2n,sep=' ') 
    
    for i in range(k%n):
        one = stage[i%n]
        two = stage[n-(i%n)-1]
        stage[i%n] = one^two
    print(*stage,sep=' ')
    testcase-=1
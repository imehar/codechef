testcase = int(input())
for _ in range(testcase):
    n,m,q = map(int,input().strip().split(' '))
    count = 0
    row = [0]*(n+1)
    col = [0]*(m+1)
    for __ in range(q):
        x,y = map(int,input().strip().split())
        row[x-1] ^=1
        col[y-1] ^=1
    rs = sum(row)
    cs = sum(col)
    print(abs((rs*m + cs*n) - 2*(rs*cs)))
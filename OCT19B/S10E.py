testcase = int(input())
for _ in range(testcase):
    n = int(input())
    a = list(map(int,input().split()))
    count = 0
    for i in range(n):
        if all( v > a[i] for v in a[max(0,i-5):i]):
            count+=1
#             print(a[i])
    print(count)
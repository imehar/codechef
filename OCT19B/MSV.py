import math
testcase = int(input())
while (testcase):
    n = int(input())
    a = list(map(int,input().split()))
    mx = 0
    cur_mx = a[0]
    d = [0]*(max(a)+2)
    d[a[0]] = 1
    for i in range(1,n):
        count = 0
        if (cur_mx//a[i])<=len(d):
            c_d = math.ceil(cur_mx - 2*a[i]+1)/a[i]
            temp_d = 0
            for j in range(2*a[i],cur_mx+1,a[i]):
                if d[j]>0:
                    count += d[j]
                if cur_mx%j==0:
                    temp_d+=1
                if temp_d>=c_d:
                    break
        else:
            for k,v in d.items():
                if not(k%a[i]):
                    count+=v
        d[a[i]] = d[a[i]] + 1
        cur_mx = max(cur_mx,a[i])
        mx = max(count,mx)
    testcase-=1
    print(mx)
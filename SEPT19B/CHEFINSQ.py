def combinationUtil(arr, n, r,index, data, i,sums, cur_sum,min_sum):
    if(index == r):
#         for j in range(r):
#             print(data[j], end = " ")
#         print(" ")
# #         temp_s = sum(data)
        sums[cur_sum] = 1+sums.get(cur_sum,0)
        min_sum[0] = min(cur_sum,min_sum[0])
        return
    if(i >= n): 
        return
    elif cur_sum+arr[i] > min_sum[0]:
        return
    data[index] = arr[i]
#     print('cur ',cur_sum,' min ',min_sum)
    combinationUtil(arr, n, r,index + 1, data, i + 1, sums, cur_sum+arr[i],min_sum)
    combinationUtil(arr, n, r, index,data, i + 1, sums, cur_sum,min_sum)

def combination(arr, n, r,sums,min_sum,cur_sum=0):
    data = list(range(r))
    combinationUtil(arr, n, r,0, data, 0,sums, cur_sum,min_sum)
  

# from itertools import combinations
testcase = int(input())
for _ in range(testcase):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    sums = {}
    min_sum = [float('inf')]
    cur_sum=0
    a.sort()    
    combination(a,n,k,sums,min_sum,cur_sum)
    print(sums[min_sum[0]])
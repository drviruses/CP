import math import gcd
for t in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    prd, rest = 1, 1
    for i in arr:
        prd *= i
    for i in range(len(arr)):
        rest *= i
        prd = prd // arr[i]
        if(gcd(rest, prd) == 1):
            print(i+1)
            break
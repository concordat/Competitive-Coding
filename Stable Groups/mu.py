#!/usr/bin/env python3

import sys
from math import ceil

n, k, x = [int(item) for item in sys.stdin.readline().rstrip().split()]
*a, = [int(item) for item in sys.stdin.readline().rstrip().split()]

a.sort()
count = 1
gap = []
for i in range(len(a)-1):
    temp = a[i+1] - a[i]
    if temp > x:
       gap.append(temp)
       count += 1

gap.sort()
for v in gap:
    need = (v+x-1)//x-1
    if need <= k:
        k -= need
        count -= 1
print(count)

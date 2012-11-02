#!/usr/bin/env python2

N = 100000
arr = range(0,N)
k = N//2

for i in range(100*N):
	k = arr[k]

print (k)
